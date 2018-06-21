#include<cstdio>
#include<iostream>
#include "number.h"

using namespace std;

RealNumber::RealNumber(double B)
	:AbstractNumber()
{
	a=B;
}

RealNumber::~RealNumber()
	:~AbstractNumber()
{
}

void RealNumber::print()
{
	cout<<"The value of this RealNumber is: "<<a<<endl;
}

AbstractNumber RealNumber::add(const AbsractNumber& other)
{
	RealNumber c(a);
	c.a+=other.a;
	return c;
}

AbstractNumber RealNumber::mul(const AbstractNumber& other)
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
	:~IntegerNumber()
{
}

void IntegerNumber::print()
{
	cout<<"The value of this IntegerNumber is : "<<b<<endl;
}

AbstractNumber IntegerNumber::add(const AbstractNumber& other)
{
	IntegerNumber c(b);
	c.b+=other.b;
	return c;
}

AbstractNumber IntegerNumber::mul(const AbstractNumber& other)
{
	IntegerNumber c(b);
	c.b*=other.b;
	return c;
}

ComplexNumber::ComplexNumber(double R,double C)
	:AbstractNumber()
{
	real=R,comp=C;
}

ComplexNumber::~ComplexNumber()
	:~AbstractNumber()
{
}

void ComplexNumber::print()
{
	cout<<"the value of this ComplexNumber is: "<<real;
	if(comp>0)cout<<"+";
	cout<<comp<<"i"<<endl;
}

AbstractNumber ComplexNumber::add(const AbstractNumber& other)
{
	ComplexNumber c(real,comp);
	c.real+=other.real;
	c.comp+=other.comp;
	return c;
}

AbstractNumber ComplexNumber::mul(const AbstractNumber& other)
{
	ComplexNumber c(0,0);
	c.real=real*other.real-comp*other.comp;
	c.comp=real*other.comp+comp*other.real;
	return c;
}
