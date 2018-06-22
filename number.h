fndef NUMBERRRRRRRS_H
#define NUMBERRRRRRRS_H

#include<cstdio>
#include<iostream>

using namespace std;

class AbstractNumber{
	public:
		virtual void print(){}
		virtual AbstractNumber add(const AbstractNumber& other){return *this;}
		virtual AbstractNumber mul(const AbstractNumber& other){return *this;}
};

class RealNumber: public AbstractNumber{
	private:
		double a;
	public:
		RealNumber(double =0);
		~RealNumber();
		RealNumber add(const RealNumber& other);
		RealNumber mul(const RealNumber& other);
		void print();
};

class IntegerNumber: public RealNumber{
	private:
		int b;
	public:
		IntegerNumber(int =0);
		~IntegerNumber();
		IntegerNumber add(const IntegerNumber& other);
		IntegerNumber mul(const IntegerNumber& other);
		void print();
};

class ComplexNumber: public AbstractNumber{
	private:
		double real,comp;
	public:
		ComplexNumber(double =0,double =0);
		~ComplexNumber();
		ComplexNumber add(const ComplexNumber& other);
		ComplexNumber mul(const ComplexNumber& other);
		void print();
};

#endif
