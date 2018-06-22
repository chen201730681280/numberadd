#ifndef NUMBER_H
#define NUMBER_H

#include<iostream>
using namespace std;

class Number
{
public:
	Number();
	virtual void print();
	virtual Number add(const Number&);
	virtual Number mul(const Number&);
};
class RealNumber :public Number
{
private:
	double num1;
public:
	RealNumber();
	RealNumber(double);
	void print();
	virtual RealNumber add(const RealNumber&);
	virtual RealNumber mul(const RealNumber&);
};
class IntegerNumber :public RealNumber
{
private:
	int num1;
public:
	IntegerNumber(int);
	void print();
	virtual IntegerNumber add(const IntegerNumber&);
	virtual IntegerNumber mul(const IntegerNumber&);
};
class ComplexNumber :public Number
{
private:
	double num1;
	double num2;
public:
	ComplexNumber(double, double);
	void print();
	virtual ComplexNumber add(const ComplexNumber&);
	virtual ComplexNumber mul(const ComplexNumber&);
};

#endif



