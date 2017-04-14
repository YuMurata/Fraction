#include"Fraction.h"
#include<MathPlus.h>

using namespace MathPlus;

Fraction::Fraction(const int &numer, const int &denom)
{
	auto gcd = GCD(denom, numer);
	this->numer = numer / gcd;
	this->denom = denom / gcd;

	// •ª•ê‚Íí‚É³
	if (denom < 0)
	{
		this->denom *= -1;
		this->numer *= -1;
	}
}

Fraction::Fraction(const int &x)
	:Fraction(x, 1) {}

Fraction::Fraction()
	:Fraction(0) {}

Fraction Fraction::Reciprocal() const
{
	Fraction ret(this->denom, this->numer);
	return ret;
}

double Fraction::Value() const
{
	auto ret = this->numer / this->denom;
	return ret;
}

string Fraction::Improper()const
{
	auto numer = to_string(this->numer);
	auto denom = to_string(this->denom);
	auto ret = numer + "/" + denom;
	return ret;
}

string Fraction::Band()const
{
	string ret;
	
	if (this->numer > this->denom)
	{
		auto x = this->numer / this->denom;
		auto band = to_string(x)+"$";

		auto y = this->numer%this->denom;

		Fraction temp(y, this->denom);
		ret = band + temp.Improper();
	}
	else
	{
		ret = this->Improper();
	}

	return ret;
}


std::ostream & operator<<(std::ostream &stream,const Fraction &x)
{
	stream << x.Improper();
	return stream;
}
