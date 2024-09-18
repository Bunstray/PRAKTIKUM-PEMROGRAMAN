#include <bits/stdc++.h>
#define ll long long
using namespace std;

string soal2(string input){
    ll n=stoi(input);
    string out;
	for(int i=1;i<=10;i++){
        string temp = to_string(n);
        out = out.append(temp);
        out = out + " x ";
        temp = to_string(i);
        out = out.append(temp);
        out = out + " = ";
        temp = to_string(n*i);
        out = out.append(temp);
        if(i!=10){
        	out+="\n";
		}
	}
    return out;
}

signed main(){
    ifstream test("test.txt");
	if(test.is_open()){
		string input,output,temp;
		int test_num=1;
		int line = 0;
		while (getline(test,temp))
        {
            if(line==0){
            	input=temp;
			}
			else if(line==1){
				output+=temp;
			}
			else{
				output+="\n"+temp;
			}
			if(line==10){
				if(soal2(input)==output){
                cout<<"Test "<<test_num<<" passed!\n";
	            }
	            else{
	                cout <<"Test "<<test_num<<" failed.\nExpected output : \n"<<soal2(input)<<"\nOutput : \n"<<output<<"\n";
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