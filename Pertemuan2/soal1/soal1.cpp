#include <bits/stdc++.h>
using namespace std;

int main(){
    int gross,tax,installment,insurance,net;
    string name;
    cout<< "Name : ";
    cin>>name;
    cout<<"\n"<<"Gross income : ";
	cin>>gross;
	cout<<"\n"<<"Installment : ";
	cin>>installment;
	cout<<"\n"<<"Insurance : ";
	cin>>insurance;
    tax = gross/5;
    net = gross - tax - installment - insurance;
    cout<<"\n"<<"\n";
    cout<<"Payslip for Employee"<<"\n";
    cout<<"---------------------"<<"\n";
    cout<<"Name = "<<name<<"\n";
    cout<<"Gross Salary = "<<"Rp"<<gross<<",-"<<"\n";
    cout<<"Tax (20%) = "<<"Rp"<<tax<<",-"<<"\n";
    cout<<"Installment = "<<"Rp"<<installment<<",-"<<"\n";
    cout<<"Insurance = "<<"Rp"<<insurance<<",-"<<"\n";
    cout<<"Net Salary = "<<"Rp"<<net<<",-\n";
}