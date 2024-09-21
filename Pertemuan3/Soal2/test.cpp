#include <bits/stdc++.h>
#define ll long long
using namespace std;

string soal2(string a,string b,string c){
    int A[3];
    string ans;
	A[0]=stoi(a);
    A[1]=stoi(b);
    A[2]=stoi(c);
	//Metode brute force menggunakan percabangan
	if(A[0]>=A[1]){
		if(A[0]>=A[2]){
			ans = to_string(A[0]);
		}
		else{
			ans = to_string(A[2]);
		}
	}
	else if(A[1]>=A[0]){
		if(A[1]>=A[2]){
			ans = to_string(A[1]);
		}
		else{
			ans = to_string(A[2]);
		}
	}
	return ans;
}

signed main(){
    ifstream test("test2.txt");
	if(test.is_open()){
		string a,b,c,output,temp;
		int test_num=1;
		int line = 0;
		while (getline(test,temp))
        {
			if(line==0)a=temp;
			if(line==1)b=temp;
			if(line==2)c=temp;
			if(line==3)output=temp;
            if(line==3){
				if(soal2(a,b,c)==output){
                cout<<"Test "<<test_num<<" passed!\n";
	            }
	            else{
	                cout <<"Test "<<test_num<<" failed.\nExpected output : \n"<<soal2(a,b,c)<<"\nOutput : \n"<<output<<"\n";
	            }
	            test_num++;
	            line=0;
	            temp="";
	            output="";
			}
			else{
				line++;
			}
        }  
	}
	else{
		cout<<"File input tidak ditemukan.";
	}
}