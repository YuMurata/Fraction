#include"Fraction.h"

bool Fraction::operator<(const Fraction & x)const
{
	auto ret = *this < x.Value();
	return ret;
}

bool Fraction::operator>(const Fraction & x)const
{
	auto ret = *this>x.Value();
	return ret;
}

bool Fraction::operator<=(const Fraction & x)const
{
	auto ret = *this<=x.Value();
	return ret;
}

bool Fraction::operator>=(const Fraction & x)const
{
	auto ret = *this >= x.Value();
	return ret;
}

bool Fraction::operator==(const Fraction & x)const
{
	auto ret = *this == x.Value();
	return ret;
}
bool Fraction::operator!=(const Fraction & x)const
{
	auto ret =*this!=x.Value();
	return ret;
}