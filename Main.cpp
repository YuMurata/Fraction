// Fraction.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include"Fraction.h"
#include<iostream>

using namespace std;

int main()
{
	Fraction a(1, 2);

	a = 1;
	auto c = a + 1;

	cout << a << endl;

    return 0;
}

