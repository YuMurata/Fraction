#include"Fraction.h"

using namespace std;

int GCD(int max, int min) {
	max = abs(max);
	min = abs(min);
	
	if (max < min)
	{
		swap(max, min);
	}

	int tmp;
	while (min != 0) 
	{
		tmp = min;
		min = max % min;
		max = tmp;
	}

	return (max);
}

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