#pragma once

#include<string>

//�����N���X
//denom = ����
//numer = ���q
class Fraction
{
private:
	int denom;//����
	int numer;//���q

public:
	Fraction();
	Fraction(const int &x);
	Fraction(const int &numer, const int &denom);

	~Fraction() {}

	Fraction Reciprocal()const;//�t��

	double Value()const;//�����l

#ifdef _UNICODE
	std::string Improper()const;//�������\��
	std::string Band()const;//�ѕ����\��
#else
	std::wstring Improper()const;//�������\��
	std::wstring Band()const;//�ѕ����\��
#endif

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
