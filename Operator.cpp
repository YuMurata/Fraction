#include"Fraction.h"

using namespace std;

int LCM(int x, int y) {
	x = abs(x);
	y = abs(y);
	if (x > y)
	{
		swap(x, y);
	}

	int i = x;
	while (i % y != 0)
	{
		i += x;
	}

	return i;
}

Fraction Fraction::operator+(const Fraction & x)
{
	auto denom = LCM(this->denom, x.denom);
	auto numer = this->numer*(denom / this->denom) + x.numer*(denom / x.denom);

	Fraction ret(numer, denom);
	return ret;
}

Fraction Fraction::operator-(const Fraction & x)
{
	auto ret = *this + Fraction(-x.numer, x.denom);
	return ret;
}

Fraction Fraction::operator*(const Fraction & x)
{
	Fraction left(x.numer, this->denom);
	Fraction right(this->numer, x.denom);

	Fraction ret(left.numer * right.numer, left.denom * right.denom);
	return ret;
}

Fraction Fraction::operator/(const Fraction & x)
{
	auto ret = *this * this->Reciprocal();
	return ret;
}

Fraction& Fraction::operator+=(const Fraction & x)
{
	*this = *this + x;
	return *this;
}

Fraction& Fraction::operator-=(const Fraction & x)
{
	*this = *this - x;
	return *this;
}

Fraction& Fraction::operator*=(const Fraction & x)
{
	*this = *this * x;
	return *this;
}

Fraction& Fraction::operator/=(const Fraction & x)
{
	*this = *this / x;
	return *this;
}

Fraction& Fraction::operator=(const Fraction & x)
{
	this->denom = x.denom;
	this->numer = x.numer;

	return *this;
}
