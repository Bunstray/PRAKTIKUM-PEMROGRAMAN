#include <bits/stdc++.h>
#define ll long long
using namespace std;

string fizzbuzz(){
    vector<string> ans;
	for(int i=1;i<=100;i++){
		if(i%15==0){
			ans.push_back("FizzBuzz");
		}
		else if(i%3==0){
			ans.push_back("Fizz");
		}
		else if(i%5==0){
			ans.push_back("Buzz");
		}
		else{
			ans.push_back(to_string(i));
		}
	}
    string answ;
	for(int i=0;i<100;i++){
        answ+=ans[i]+"\n";
	}
	return answ;
}

string reversearray(string n){
	string a=n;
    int len=a.length();
    string out;
    if(a[0]=='['){
        out += "[";
		for(int i=len-2;i>0;i--){
			if(a[i-1]==' '){
				out+=a[i];
			}
			else if(a[i]==' '){
				out+=" ";
			}
			else{
				int count=1;
				int p=i;
				while(a[p-1]!=' '){
					count++;
					p--;
				}
				string temp;
				for(int j=i-count;j<=i;j++){
					temp+=a[j];
				}
				int tlen=temp.length();
				for(int m=1;m<tlen;m++){
					out+=temp[m];
				}
				out+=" ";
				i-=count;
			}
		} 
		out += "]";   
    }
	return out;
}

signed main(){
    ifstream test("test.txt");
	if(test.is_open()){
		string input,output,temp;
        bool done=false;
		int test_num=1;
		int line = 1;
		while (getline(test,temp)){
            if(done==false){
                output+=temp+"\n";
                if(line==100){
                    if(output==fizzbuzz()){
                        cout<<"Fizzbuzz is working as expected\n";
                    }
                    else{
                        cout<<"Fizzbuzz isn't working as expected\n";
                    }
                    done=true;
                    line=0;
                    cout<<"Reverse Array :\n";
                }  
                line++;
            }
            else{
                if(line==1){
                    input=temp;
                }
                else{
                    output=temp;
                    if(output==reversearray(input)){
                        cout<<"Test "<<test_num<<" is as expected\n";
                    }
                    else{
                        cout<<"Test "<<test_num<<" isn't as expected\n";
                    }
                    test_num++;
                    line=0;
                }
                line++;
            }
        }
    }    
	else{
		cout<<"File input tidak ditemukan.";
	}
}