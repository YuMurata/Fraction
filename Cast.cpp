#include"Fraction.h"

using namespace std;

Fraction::operator double()
{
	auto ret = 1.*this->numer / this->denom;
	return ret;
}

Fraction::operator std::string()
{
	auto numer = to_string(this->numer);
	auto denom = to_string(this->denom);
	auto ret = numer + "/" + denom;
	return ret;
}
