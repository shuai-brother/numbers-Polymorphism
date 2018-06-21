#ifndef NUMBERRRRRRRS_H
#define NUMBERRRRRRRS_H

#include<cstdio>
#include<iostream>

using namespace std;

class AbstractNumber{
	public:
		AbstractNumber(double =0,double =0){}
		~AbstractNumber(){}
		virtual void print(){}
		virtual AbstractNumber add(const AbstractNumber& other){AbstractNumber AA;return AA;}
		virtual AbstractNumber mul(const AbstractNumber& other){AbstractNumber AA;return AA;}
};

class RealNumber: public AbstractNumber{
	private:
		double a;
	public:
		RealNumber();
		~RealNumber();
		AbstractNumber add(const AbstractNumber& other);
		AbstractNumber mul(const AbstractNumber& other);
		void print();
};

class IntegerNumber: public RealNumber{
	private:
		int b;
	public:
		IntegerNumber();
		~IntegerNumber();
		AbstractNumber add(const AbstractNumber& other);
		AbstractNumber mul(const AbstractNumber& other);
		void print();
};

class ComplexNumber: public AbstractNumber{
	private:
		double real,comp;
	public:
		ComplexNumber();
		~ComplexNumber();
		AbstractNumber add(const AbstractNumber& other);
		AbstractNumber mul(const AbstractNumber& other);
		void print();
};

#endif
