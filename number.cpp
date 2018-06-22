#include<cstdio>
#include<iostream>
#include "number.h"

using namespace std;

RealNumber::RealNumber(double B)
{
	a=B;
}

RealNumber::~RealNumber()
{
}

void RealNumber::print()
{
	cout<<"The value of this RealNumber is: "<<a<<endl;
}

RealNumber RealNumber::add(const RealNumber& other)
{
	RealNumber c(a);
	c.a+=other.a;
	return c;
}

RealNumber RealNumber::mul(const RealNumber& other)
{
	RealNumber c(a);
	c.a*=other.a;
	return c;
}

IntegerNumber::IntegerNumber(int B)
	:RealNumber(0)
{
	b=B;
}

IntegerNumber::~IntegerNumber()
{
}

void IntegerNumber::print()
{
	cout<<"The value of this IntegerNumber is : "<<b<<endl;
}

IntegerNumber IntegerNumber::add(const IntegerNumber& other)
{
	IntegerNumber c(b);
	c.b+=other.b;
	return c;
}

IntegerNumber IntegerNumber::mul(const IntegerNumber& other)
{
	IntegerNumber c(b);
	c.b*=other.b;
	return c;
}

ComplexNumber::ComplexNumber(double R,double C)
{
	real=R,comp=C;
}

ComplexNumber::~ComplexNumber()
{
}

void ComplexNumber::print()
{
	cout<<"the value of this ComplexNumber is: ";
	if(real!=0)cout<<real;
	if(comp>0)cout<<"+";
	else if(comp==0)
	{
		cout<<endl;
		return;
	}
	cout<<comp<<"i"<<endl;
}

ComplexNumber ComplexNumber::add(const ComplexNumber& other)
{
	ComplexNumber c(real,comp);
	c.real+=other.real;
	c.comp+=other.comp;
	return c;
}

ComplexNumber ComplexNumber::mul(const ComplexNumber& other)
{
	ComplexNumber c(0,0);
	c.real=real*other.real-comp*other.comp;
	c.comp=real*other.comp+comp*other.real;
	return c;
}

