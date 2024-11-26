#include <bits/stdc++.h>
#define ll long long
using namespace std;

void Gabungan(){
	int a=5;
	int b=5;
	int A[a];
	int B[b];
	int C[a+b];
	//test case bisa diganti sesuai kemauan
	A[0]=1;
	A[1]=3;
	A[2]=4;
	A[3]=6;
	A[4]=8;
	B[0]=2;
	B[1]=5;
	B[2]=7;
	B[3]=9;
	B[4]=13;
	int x=0;
	while(a!=0&&b!=0){
		if(A[0]<=B[0]){
			C[x]=A[0];
			x++;
			for(int i=0;i<a;i++){
				A[i]=A[i+1];
			}
			a--;
		}
		else{
			C[x]=B[0];
			x++;
			for(int i=0;i<b;i++){
				B[i]=B[i+1];
			}
			b--;
		}
	}
	if(a==0){
		for(int i=0;i<b;i++){
			C[x]=B[i];
			x++;
		}
	}
	else{
		for(int i=0;i<a;i++){
			C[x]=A[i];
			x++;
		}	
	}
	int ans[10];
	//test case bisa diganti sesuai kemauan
	ans[0]=1;
	ans[1]=2;
	ans[2]=3;
	ans[3]=4;
	ans[4]=5;
	ans[5]=6;
	ans[6]=7;
	ans[7]=8;
	ans[8]=9;
	ans[9]=13;
	int tes=0;
	for(int i=0;i<10;i++){
		if(ans[i]==C[i]){
			tes++;
		}
	}
	if(tes==10){
		cout<<"test nomor 8 berhasil\n";
	}
	else cout<<"test nomor 8 gagal\n";
}

void Terbesarkedua(){
	//test case bisa diganti sesuai kemauan
	int n=10;
	int a[n];
	a[0]=543;
	a[1]=536;
	a[2]=865;
	a[3]=423;
	a[4]=654;
	a[5]=753;
	a[6]=856;
	a[7]=634;
	a[8]=654;
	a[9]=567;
	int largest=0;int secondlargest=0;
	for(int i=0;i<n;i++){
		if(a[i]>largest){
			secondlargest=largest;
			largest=a[i];
		}
		else{
			if(a[i]>secondlargest){
				secondlargest=a[i];
			}
		}
	}
	//test case bisa diganti sesuai kemauan
	if(secondlargest==856){
		cout<<"test no 7 berhasil\n";
	}
	else cout<<"test no 7 gagal\n";
	
}

signed main(){
	Gabungan();
	Terbesarkedua();
}