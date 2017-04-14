#pragma once

#include<string>

class Fraction
{
private:
	int denom;//•ª•ê
	int numer;//•ªŽq

public:
	Fraction();
	Fraction(const int &x);
	Fraction(const int &numer, const int &denom);

	~Fraction() {}

	Fraction Reciprocal()const;

	Fraction operator+(const Fraction &x);
	Fraction operator-(const Fraction &x);
	Fraction operator*(const Fraction &x);
	Fraction operator/(const Fraction &x);

	Fraction& operator+=(const Fraction &x);
	Fraction& operator-=(const Fraction &x);
	Fraction& operator*=(const Fraction &x);
	Fraction& operator/=(const Fraction &x);

	Fraction operator+(const int &x);
	Fraction operator-(const int &x);
	Fraction operator*(const int &x);
	Fraction operator/(const int &x);

	Fraction& operator+=(const int &x);
	Fraction& operator-=(const int &x);
	Fraction& operator*=(const int &x);
	Fraction& operator/=(const int &x);

	Fraction& operator=(const Fraction &x);
	Fraction& operator=(const int &x);

	operator double();
	operator std::string();
};