// lesson1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"Rational.h"
#include <iostream>
using namespace std;

int main()
{

	int numerator, denominator;
	char tav;
	cout << "enter two rational numbers:" << endl;
	cin >> numerator >> tav >> denominator;
	Rational r1;
	r1.setNumerator(numerator);
	r1.setDenominator(denominator);
	cin >> numerator >> tav >> denominator;
	Rational r2(numerator, denominator);
	Rational ans = r1.add(r2);
	r1.print();
	cout << "+ ";
	r2.print();
	cout << "= ";
	ans.print();
	cout << endl;
	ans = r1.add(5);
	r1.print();
	cout << "+ 5 = ";
	ans.print();
	cout << endl;
	ans = r1.add();
	r1.print();
	cout << "+ 1 = ";
	ans.print();
	cout << endl;
	if (r1.equal(r2))
		cout << "The two numbers are equal" << endl;
	else
	{
		cout << "The two numbers are different" << endl;
		r1.print();
		r2.print();
		cout << endl;
	}
	Rational arr[5] = { {1,2},{3,4},{5,2},{3,6},{1,5} };



	return 0;
}

