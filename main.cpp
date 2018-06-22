#include<cstdio>
#include<iostream>
#include "number.h"

using namespace std;

int main()
{
	RealNumber AA(0.33),N0(2.00);
	IntegerNumber BB(33),N1(200);
	ComplexNumber CC(3,-4),N2(3,4);
	N0.add(AA).print();
	N0.mul(AA).print();
	N0.print();
	N1.add(BB).print();
	N1.mul(BB).print();
	N1.print();
	N2.add(CC).print();
	N2.mul(CC).print();
	N2.print();
	return 0;
}
