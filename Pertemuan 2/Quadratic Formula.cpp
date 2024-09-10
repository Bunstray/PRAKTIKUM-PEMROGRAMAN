#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double A,B,C,d;
	cout<<"<---Quadratic Formula--->"<<"\n"<<"\n";
	cout<<"Ax^2 + Bx + C = 0"<<"\n";
	cout<<"A = ";
	cin>>A;
	cout<<"\n"<<"B = ";
	cin>>B;
	cout<<"\n"<<"C = ";
	cin>>C;
	d=(B*B)-(4*A*C);
	cout<<"--------------------------"<<"\n";
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
		cout<<"There is no real roots (the roots are complex)"<<"\n";
	}
	cout<<"\n";
    system("pause");
}