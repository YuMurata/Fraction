#include"Fraction.h"

bool Fraction::operator<(const double & x) const
{
	auto ret = this->Value() < x;
	return ret;
}

bool Fraction::operator>(const double & x) const
{
	auto ret = this->Value() > x;
	return ret;
}

bool Fraction::operator<=(const double & x) const
{
	auto ret = *this < x||*this==x;
	return ret;
}

bool Fraction::operator>=(const double & x) const
{
	auto ret = *this > x || *this == x;
	return ret;
}

bool Fraction::operator==(const double & x) const
{
	auto ret = this->Value() == x;
	return ret;
}

bool Fraction::operator!=(const double & x) const
{
	auto ret = !(*this == x);
	return ret;
}