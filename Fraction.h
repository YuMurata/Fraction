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

	double Value()const;

	std::string Improper()const;
	
	std::string Band()const;

	Fraction& operator=(const Fraction &x);

	Fraction operator+(const Fraction &x)const;
	Fraction operator-(const Fraction &x)const;
	Fraction operator*(const Fraction &x)const;
	Fraction operator/(const Fraction &x)const;

	Fraction& operator+=(const Fraction &x);
	Fraction& operator-=(const Fraction &x);
	Fraction& operator*=(const Fraction &x);
	Fraction& operator/=(const Fraction &x);

	
	Fraction& operator=(const int &x);
	
	Fraction operator+(const int &x)const;
	Fraction operator-(const int &x)const;
	Fraction operator*(const int &x)const;
	Fraction operator/(const int &x)const;

	Fraction& operator+=(const int &x);
	Fraction& operator-=(const int &x);
	Fraction& operator*=(const int &x);
	Fraction& operator/=(const int &x);

	
	bool operator<(const Fraction &x)const;
	bool operator>(const Fraction &x)const;

	bool operator<=(const Fraction &x)const;
	bool operator>=(const Fraction &x)const;

	bool operator==(const Fraction &x)const;
	bool operator!=(const Fraction &x)const;


	bool operator<(const double &x)const;
	bool operator>(const double &x)const;

	bool operator<=(const double &x)const;
	bool operator>=(const double &x)const;

	bool operator==(const double &x)const;
	bool operator!=(const double &x)const;


	friend std::ostream& operator<<(std::ostream &stream,const Fraction &x);
};
