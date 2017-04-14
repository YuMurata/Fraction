// Fraction.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include"Fraction.h"
#include<iostream>

using namespace std;

int main()
{
	Fraction a(1,2);
	Fraction b(3, 2);
	cout << a+b<< endl;

    return 0;
}

