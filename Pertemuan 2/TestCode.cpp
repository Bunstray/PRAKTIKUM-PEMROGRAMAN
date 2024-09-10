#include <bits/stdc++.h>
using namespace std;

bool Payslip(string name,int gross,int installment,int insurance,int exp1,int exp2){
	int net,tax;
    cout<< "Name : "<<name;
    cout<<"\n"<<"Gross income : "<<gross;
	cout<<"\n"<<"Installment : "<<installment;
	cout<<"\n"<<"Insurance : "<<insurance;
    tax = gross/5;
    net = gross - tax - installment - insurance;
    cout<<"\n"<<"\n";
    cout<<"Payslip for Employee"<<"\n";
    cout<<"---------------------"<<"\n";
    cout<<"Name = "<<name<<"\n";
    cout<<"Tax (20%) = "<<"Rp"<<tax<<",-"<<"\n";
    cout<<"Installment = "<<"Rp"<<installment<<",-"<<"\n";
    cout<<"Insurance = "<<"Rp"<<insurance<<",-"<<"\n";
    cout<<"Net Salary = "<<"Rp"<<net<<",-"<<"\n";
    if(tax==exp1&&net==exp2){
    	return true;
	}
	else{
		return false;
	}
}

bool QuadraticFormula(double A, double B,double C,double exp1,double exp2,int root){
	cout<<"\n"<<"<---Quadratic Formula--->"<<"\n"<<"\n";
	cout<<"Ax^2 + Bx + C = 0"<<"\n";
	cout<<"A = "<<A;
	cout<<"\n"<<"B = "<<B;
	cout<<"\n"<<"C = "<<C;
	double d=(B*B)-(4*A*C);
	cout<<"\n"<<"--------------------------"<<"\n";
	if(d>0){
		double x1,x2;
		x1=(((-B)+sqrt(d))/(2*A));
		x2=(((-B)-sqrt(d))/(2*A));
		cout<<"x1 = "<<x1<<"\n"<<"\n"<<"x2 = "<<x2<<"\n";
		if(x1==exp1&&x2==exp2&&root==1){
			return true;
		}
		else if(x1==exp2&&x2==exp1&&root==1){
			return true;
		}
		else{
			return false;
		}
	}
	else if(d==0){
		double x1,x2;
		x1=-B/(2*A);
		x2=x1;
		cout<<"x = "<<x1<<"\n";
		if(x1==exp1&&root==2){
			return true;
		}
		else{
			return false;
		}
	}
	else{
		cout<<"There is no real roots (the roots are complex)"<<"\n";
		if(root==3){
			return true;
		}
		else{
			return false;
		}
	}
}

int main(){
	int test;
	cout<<"Choose which solution to test"<<"\n"<<"1. Payslip"<<"\n"<<"2. Quadratic Formula"<<"\n"<<"\n"<<"Input : "; cin>>test;
	if(test==2){
		int root;
		double A,B,C,xp1,xp2;
		cout<<"\n"<<"<---Quadratic Formula--->"<<"\n"<<"\n";
		cout<<"Ax^2 + Bx + C = 0"<<"\n";
		cout<<"A = ";
		cin>>A;
		cout<<"\n"<<"B = ";
		cin>>B;
		cout<<"\n"<<"C = ";
		cin>>C;
		cout<<"\n"<<"Expected amount of roots : "<<"\n"<<"1. Two Roots"<<"\n"<<"2. One root"<<"\n"<<"3. No root"<<"\n"<<"Input : ";
		cin>>root;
		if(root==1){
			cout<<"\n"<<"Expected answer : "<<"\n"<<"x1 = "; cin>>xp1;
			cout<<"\n"<<"x2 = "; cin>>xp2;
			if(QuadraticFormula(A,B,C,xp1,xp2,root)){
				cout<<"\n"<<"The solution is as expected";
			}
			else{
				cout<<"\n"<<"The solution isn't' as expected";
			}
		}
		else if(root==2){
			cout<<"\n"<<"Expected answer : "<<"\n"<<"x = "; cin>>xp1;
			xp2=xp1;
			if(QuadraticFormula(A,B,C,xp1,xp2,root)){
				cout<<"\n"<<"The solution is as expected";
			}
			else{
				cout<<"\n"<<"The solution isn't' as expected";
			}
		}
		else if(root==3){
			if(QuadraticFormula(A,B,C,xp1,xp2,root)){
				cout<<"\n"<<"The solution is as expected";
			}
			else{
				cout<<"\n"<<"The solution isn't' as expected";
			}
		}
	}
	else if(test==1){
		int gross,installment,insurance,exp1,exp2;
		string name;
		cout<<"<---Payslip--->"<<"\n"<<"\n";
		cout<<"Please input the following form"<<"\n";
		cout<<"Name : ";cin>>name;
		cout<<"\n"<<"Gross Income : ";cin>>gross;
		cout<<"\n"<<"Installment : ";cin>>installment;
		cout<<"\n"<<"Insurance : ";cin>>insurance;
		cout<<"\n"<<"Expected Tax : ";cin>>exp1;
		cout<<"\n"<<"Expected Net Income : ";cin>>exp2;
		if(Payslip(name,gross,installment,insurance,exp1,exp2)){
			cout<<"\n"<<"The solution is as expected";
		}
		else{
			cout<<"\n"<<"The solution isn't' as expected";
		}
	}
	cout<<"\n";
    system("pause");
}