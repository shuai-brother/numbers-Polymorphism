#include<cstdio>
#include<iostream>
#include "number.h"

using namespace std;

int main()
{
	AbstractNumber *N[3];
	RealNumber AA(0.33);
	IntegerNumber BB(33);
	ComplexNumber CC(3,-4);
	N[0]=new RealNumber(2.00);
	N[1]=new IntegerNumber(200);
	N[2]=new ComplexNumber(3,4);
	N[0]->add(AA).print();
	N[0]->mul(AA).print();
	N[0]->print();
	N[1]->add(BB).print();
	N[1]->mul(BB).print();
	N[1]->print();
	N[2]->add(CC).print();
	N[2]->mul(CC).print();
	N[2]->print();
	return 0;
}
