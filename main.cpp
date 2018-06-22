#include"number.h"
#include<iostream>
using namespace std;

int main()
{
	RealNumber t1(2.9);
	RealNumber t2(4.6);
	t1.add(t2);
	cout << "2.9" << "+" << "4.6"<<"=";
	t1.print();
	t1.mul(t2);
	cout << "2.9" << "*" << "4.6"<<"=";
	t1.print();
	IntegerNumber t3(2);
	IntegerNumber t4(4);
	t3.add(t4);
	cout << "2" << "+" << "4"<<"=";
	t3.print();
	t3.mul(t4);
	cout << "2" << "*" << "4"<<"=";
	t3.print();
	ComplexNumber t5(2.5, 2.5);
	ComplexNumber t6(4.5, 5.5);
	t5.add(t6);
	cout << "2.5" << "+" << "2.5i" << "+" << "4.5" << "+" << "5.5i" << "=";
	t5.print();
	t5.mul(t6);
	cout << "(2.5+2.5i)" << "*" << "(4.5+5.5i)=";
	t5.print();
        return 0;
}

