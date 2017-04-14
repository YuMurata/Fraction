#include"Fraction.h"

Fraction Fraction::operator+(const int & x)const
{
	return this->operator+(Fraction(x));
}

Fraction Fraction::operator-(const int & x)const
{
	return this->operator-(Fraction(x));
}

Fraction Fraction::operator*(const int & x)const
{
	return this->operator*(Fraction(x));
}

Fraction Fraction::operator/(const int & x)const
{
	return this->operator/(Fraction(x));
}

Fraction& Fraction::operator+=(const int & x)
{
	return this->operator+=(Fraction(x));
}

Fraction& Fraction::operator-=(const int & x)
{
	return this->operator-=(Fraction(x));
}

Fraction& Fraction::operator*=(const int & x)
{
	return this->operator*=(Fraction(x));
}

Fraction& Fraction::operator/=(const int & x)
{
	return this->operator/=(Fraction(x));
}

Fraction& Fraction::operator=(const int & x)
{
	*this = Fraction(x);
	return *this;
}