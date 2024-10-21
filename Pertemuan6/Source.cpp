#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct necessity{
	int code;
	string name;
	float price;
	int amount;
};

signed main(){
	int n;
	float mean=0;
	cout<<"How many kind of item(s) :";
	cin>>n;
	if(n>50){
		cout<<"Error : Too much request";
		return 0;
	}
	necessity stuff[n];
	for(int i=0;i<n;i++){
		cout<<"Item ("<<i+1<<")\n";
		cout<<"Code : ";cin>>stuff[i].code;
		cout<<"Name : ";cin>>stuff[i].name;
		cout<<"Price : Rp";cin>>stuff[i].price;
		cout<<"Amount : ";cin>>stuff[i].amount;
		mean+=stuff[i].price;
	}
	mean/=n;
	for(int i=0;i<n;i++){
		cout<<"\nItem ("<<i+1<<")\n";
		cout<<"Code : "<<stuff[i].code;
		cout<<"\nName : "<<stuff[i].name;
		cout<<"\nPrice : Rp"<<stuff[i].price;
		cout<<"\nAmount : "<<stuff[i].amount<<"\n";
	}
	cout<<"\nAverage Price of "<<mean<<"\n";
}
