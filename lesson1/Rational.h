#pragma once
class Rational
{
	int numerator;
	int denominator;
public:
	Rational();
	Rational(int, int);
	void setNumerator(int);
	void setDenominator(int);
	int getNumerator();
	int getDeminator();
	void print();
	bool equal(Rational);
	Rational add(Rational);
	Rational add(int num=1);
private:
	Rational RationalReducation();
};

