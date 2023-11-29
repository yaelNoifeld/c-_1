#include "Rational.h"
#include <iostream>
using namespace std;

Rational::Rational()
{
	numerator = 1;
	denominator = 1;
}
Rational::Rational(int numerator, int deminator)
{
	this->numerator = numerator;
	this->denominator = deminator;
}
void Rational::setNumerator(int numerator) { this->numerator = numerator; }
void Rational::setDenominator(int denominator)
{
	if (denominator == 0)
	{
		denominator = 1;
		return;
	}
	this->denominator = denominator;
}
int Rational::getNumerator() { return this->numerator; }
int Rational::getDeminator() { return this->denominator; }
void Rational::print()
{
	cout << this->numerator << '/' << denominator << endl;
}
bool Rational::equal(Rational r)
{
	return r.numerator / r.denominator == this->numerator / this->denominator;

}
Rational Rational::add(Rational r)
{
	Rational newR = { this->numerator * r.denominator + r.numerator * this->denominator,this->denominator * r.denominator };
	return newR.RationalReducation();
}
Rational Rational::add(int num)
{
	Rational newR = { num * this->denominator + this->numerator,this->denominator };
	return newR.RationalReducation();
}
Rational Rational::RationalReducation()
{
	int tempN = this->numerator, tempD = this->denominator;
	for (int i = min(tempD, tempN); i > 0; i--)
	{
		if (tempN % i == 0 && tempD % i == 0)
		{
			Rational r = { tempN / i,tempD / i };
			return r;
		}
	}
}
