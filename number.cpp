#include"number.h"
#include<iostream>
using namespace std;
Number::Number()
{}
void Number::print()
{}
Number Number::add(const Number& x)
{
	return *this;
}

Number Number::mul(const Number& x)
{
	return *this;
}
IntegerNumber::IntegerNumber(int a) :
	RealNumber(0.1), num1(a)
{}
void IntegerNumber::print()
{
	cout << num1 << endl;
}

IntegerNumber IntegerNumber::add(const IntegerNumber& other)
{
	num1 += other.num1;
	return *this;
}
IntegerNumber IntegerNumber::mul(const IntegerNumber& other)
{
	num1 *= other.num1;
	return *this;
}
RealNumber::RealNumber(double a) :Number(), num1(a)
{
}
RealNumber::RealNumber()
{}
RealNumber RealNumber::add(const RealNumber& other)
{
	num1 += other.num1;
	return *this;
}
RealNumber RealNumber::mul(const RealNumber& other)
{
	num1 *= other.num1;
	return *this;
}
void RealNumber::print()
{
	cout << num1 << endl;
}

ComplexNumber::ComplexNumber(double a, double b) :
	Number(), num1(a), num2(b)
{}
ComplexNumber ComplexNumber::add(const ComplexNumber& other)
{
	num1 += other.num1;
	num2 += other.num2;
	return *this;
}
ComplexNumber ComplexNumber::mul(const ComplexNumber& other)
{
	double c, d;
	c = num1 * other.num1 - num2 * other.num2;
	d = num1 * other.num2 + num2 * other.num1;
	num1 = c;
	num2 = d;
	return *this;
}
void ComplexNumber::print()
{

		cout << num1 << "+" << num2 << "i" << endl;
	
}

