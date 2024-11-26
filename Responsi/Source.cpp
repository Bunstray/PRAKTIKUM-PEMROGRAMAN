#include <bits/stdc++.h>
#define ll long long
using namespace std;

void Gabungan(){
	cout<<"berapa jumlah bilangan di list pertama?\n";
	int a;cin>>a;
	cout<<"Berapa jumlah bilangan di list kedua?\n";
	int b;cin>>b;
	int A[a];
	int B[b];
	int C[a+b];
	cout<<"Masukkan isi list pertama(integer)\n";
	for(int i=0;i<a;i++){
		cin>>A[i];
	}
	cout<<"Masukkan isi list kedua(integer)\n";
	for(int i=0;i<b;i++){
		cin>>B[i];
	}
	cout<<"Hasil Penggabungan 2 List Tersebut Setelah Diurutkan dari Kecil Adalah :\n";
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
	for(int i=0;i<x;i++){
		cout<<C[i]<<" ";
	}
}

void Terbesarkedua(){
	cout<<"Berapa jumlah bilangan dalam list?\n";
	int n;cin>>n;
	int a[n];
	cout<<"Silakan masukkan bilangan ke dalam list tersebut(integer)\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
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
	cout<<"bilangan Terbesar Kedua Adalah : "<<secondlargest;
	
}

signed main(){
	cout<<"Pilih Soal\n8.Gabungkan Dua Daftar Terurut\n7.Temukan Bilangan Terbesar Kedua\n";
	int n;cin>>n;
	if(n==8){
		Gabungan();
	}
	else if(n==7){
		Terbesarkedua();
	}
	else{
		cout<<"Bukan Soal Saya";
	}
}