#include <iostream>
using namespace std;

signed main(){
	int A[3];
	cout<<"Please input 3 round numbers! \n \n"<<"1. ";
	cin>>A[0];
	cout<<"\n2. ";
	cin>>A[1];
	cout<<"\n3. ";
	cin>>A[2];
	cout<<"\n \n";
	//Metode brute force menggunakan percabangan
	if(A[0]>=A[1]){
		if(A[0]>=A[2]){
			cout<<"The biggest number is "<<A[0];
		}
		else{
			cout<<"The biggest number is "<<A[2];
		}
	}
	else if(A[1]>=A[0]){
		if(A[1]>=A[2]){
			cout<<"The biggest number is "<<A[1];
		}
		else{
			cout<<"The biggest number is "<<A[2];
		}
	}
	cout<<"\n";
	//lebih cepat menggunakan sort daripada percabangan
	//sort(A,A+3);
	//cout<<"The biggest number is "<<A[2]<<"\n \n";
	system("pause");
}