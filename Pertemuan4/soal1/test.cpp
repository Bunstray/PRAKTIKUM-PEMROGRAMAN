#include <bits/stdc++.h>
#define ll long long
using namespace std;

string soal1(string input){
    ll n,ans = 0;
    n=stoi(input);
	for(ll i=n;i>0;i--){
		ans += i;
	}
	string hasil = to_string(ans);
	return hasil;
}

signed main(){
	int ans = 0;
    ifstream test("test.txt");
	if(test.is_open()){
		string input,output;
		int test_num=1;
		while (test>>input&&getline(test>>ws,output))
        {
            if(soal1(input)==output){
                cout<<"Test "<<test_num<<" passed!\n";
            }
            else{
                cout <<"Test "<<test_num<<" failed.\nExpected output : "<<soal1(input)<<"\nOutput : "<<output<<"\n";
            }
            test_num++;
        }
        
	}
	else{
		cout<<"File input tidak ditemukan.";
	}
}