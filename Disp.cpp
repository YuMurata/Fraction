#include"Fraction.h"

using namespace std;

#ifdef _UNICODE
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
		auto band = to_string(x) + "$";

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
#else
wstring Fraction::Improper()const
{
	auto numer = to_wstring(this->numer);
	auto denom = to_wstring(this->denom);
	auto ret = numer + L"/" + denom;
	return ret;
}

wstring Fraction::Band()const
{
	wstring ret;

	if (this->numer > this->denom)
	{
		auto x = this->numer / this->denom;
		auto band = to_wstring(x) + L"$";

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
#endif

std::ostream & operator<<(std::ostream &stream, const Fraction &x)
{
	stream << x.Improper();
	return stream;
}
