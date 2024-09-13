#include <iostream>
#include <cmath>
#include "Bsoal1.h"
using namespace std;

void formula(double A,double B,double C){
	double d;
	d=(B*B)-(4*A*C);
	if(d>0){
		double x1,x2;
		x1=(((-B)+sqrt(d))/(2*A));
		x2=(((-B)-sqrt(d))/(2*A));
		cout<<"x1 = "<<x1<<"\n"<<"\n"<<"x2 = "<<x2<<"\n";
	}
	else if(d==0){
		double x;
		x=-B/(2*A);
		cout<<"x = "<<x<<"\n";
	}
	else{
		cout<<"There is no real roots (the roots are complex / imaginary)"<<"\n";
	}
	cout<<"\n";
}