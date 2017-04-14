#pragma once

#include<string>

//分数クラス
//denom = 分母
//numer = 分子
class Fraction
{
private:
	int denom;//分母
	int numer;//分子

public:
	Fraction();
	Fraction(const int &x);
	Fraction(const int &numer, const int &denom);

	~Fraction() {}

	Fraction Reciprocal()const;//逆数

	double Value()const;//実数値

	std::string Improper()const;//仮分数表示
	
	std::string Band()const;//帯分数表示

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
