#include <bits/stdc++.h>
#define ll long long
using namespace std;

string soal(string a,string B,string C,string D){
	ll b,c,d;
	b=stoi(B);
	c=stoi(C);
	d=stoi(D);
	ll tax=b/5;
	string taxs=to_string(tax);
	ll net=b-tax-c-d;
	string nets=to_string(net);
	string ans;
	ans+="Payslip for Employee\n";
    ans+="---------------------\n";
    ans+="Name = "+a+"\n";
    ans+="Gross Salary = Rp"+B+",-\n";
    ans+="Tax (20%) = Rp"+taxs+",-\n";
    ans+="Installment = Rp"+C+",-\n";
    ans+="Insurance = Rp"+D+",-\n";
    ans+="Net Salary = Rp"+nets+",-";
    return ans;
}

signed main(){
    ifstream test("test.txt");
	if(test.is_open()){
		string a,b,c,d,output,temp;
		int test_num=1;
		int line = 0;
		while (getline(test,temp))
        {
			if(line==0)a=temp;
			else if(line==1)b=temp;
			else if(line==2)c=temp;
			else if(line==3)d=temp;
			else if(line==11)output+=temp;
            else{
            	output+=temp+"\n";
			}
			if(line==11){
				if(soal(a,b,c,d)==output){
                cout<<"Test "<<test_num<<" passed!\n";
	            }
	            else{
	                cout <<"Test "<<test_num<<" failed.\nExpected output : \n"<<output<<"\nOutput : \n"<<soal(a,b,c,d)<<"\n";
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