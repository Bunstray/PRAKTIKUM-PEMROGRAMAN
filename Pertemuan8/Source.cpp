#include <bits/stdc++.h>
#define ll long long
using namespace std;

int fibbonacci(int x){
	int a,b;
	a=0;
	b=1;
	if(x==0){
		return a;
	}
	else if(x==1){
		return b;
	}
	else{
		return fibbonacci(x-1)+fibbonacci(x-2);
	}
}

float mean(float h[], int n) {
    if (n == 1) {
        return h[0];
    }
    return (h[n - 1] + (n - 1) * mean(h, n - 1)) / n;
}

signed main(){
	int n;
	cout<<"Pilih\n1.Fibbonacci\n2.Rerata\n";
	cin>>n;
	if(n==1){
		int x;
		cout<<"Masukkan bilangan ke-n dari deret fibbonacci\n(Program ini berdasarkan deret fibbonacci f(0)=0, f(1)=1)\n";
		cin>>x;
		cout<<fibbonacci(x)<<"\n";	
	}
	else if(n==2){
		cout<<"berapa bilangan?\n";
		int p;
		cin>>p;
		cout<<"Masukkan bilangan-bilangan\n";
		float h[p];
		for(int i=0;i<p;i++){
			cin>>h[i];
		}
		cout<<mean(h,p);
	}
	else{
		cout<<"Error";
		return 404;
	}
}
