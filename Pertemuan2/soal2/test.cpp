#include <bits/stdc++.h>
#define ll long long
using namespace std;

string soal1(string a,string b,string c){
    float A,B,C,d;
    A=stof(a);
    B=stof(b);
    C=stof(c);
    string output;
    d=(B*B)-(4*A*C);
    if(d>0){
		float x1,x2;
		x1=(((-B)+sqrt(d))/(2*A));
		string X1=to_string(x1);
		int len=X1.length();
		int num=len;
		bool dot;
		while(X1[num-1] == '0') {
      		if(X1[num-2]=='.'){
      		dot=true;
      		num--;
      		break;
		  	}
		num--;
  		}
  		if(dot){
  			X1.erase(num-1, len);
		}
		else{
			X1.erase(num, len);
		}  
  		num=0;
		x2=(((-B)-sqrt(d))/(2*A));
		string X2=to_string(x2);
		len=X2.length();
		num=len;
		dot=false;
		while(X2[num-1] == '0') {
      		if(X2[num-2]=='.'){
      		dot=true;
      		num--;
      		break;
		  	}
		num--;
  		}
  		if(dot){
  			X2.erase(num-1, len);
		}
		else{
			X2.erase(num, len);
		}  
  		num=0;
		output="x1 = "+X1+"\nx2 = "+X2;
		return output;
	}
	else if(d==0){
		float x;
		x=-B/(2*A);
		string X1=to_string(x);
		int len=X1.length();
		int num=len;
		bool dot;
		while(X1[num-1] == '0') {
      		if(X1[num-2]=='.'){
      		dot=true;
      		num--;
      		break;
		  	}
		num--;
  		}
  		if(dot){
  			X1.erase(num-1, len);
		}
		else{
			X1.erase(num, len);
		}  
  		num=0;
		output="x = "+X1;
		return output;
	}
	else{
		output="There is no real roots (the roots are complex)";
		return output;
	}
}
string soal2(string a,string b,string c){
    float A,B,C,d;
    A=stof(a);
    B=stof(b);
    C=stof(c);
    string output;
    d=(B*B)-(4*A*C);
    if(d>0){
		float x1,x2;
		x1=(((-B)-sqrt(d))/(2*A));
		x1=("%g",x1);
		string X1=to_string(x1);
		int len=X1.length();
		int num=len;
		bool dot;
		while(X1[num-1] == '0') {
      		if(X1[num-2]=='.'){
      		dot=true;
      		num--;
      		break;
		  	}
		num--;
  		}
  		if(dot){
  			X1.erase(num-1, len);
		}
		else{
			X1.erase(num, len);
		}  
  		num=0;
		x2=(((-B)+sqrt(d))/(2*A));
		string X2=to_string(x2);
		len=X2.length();
		num=len;
		dot=false;
		while(X2[num-1] == '0') {
      		if(X2[num-2]=='.'){
      		dot=true;
      		num--;
      		break;
		  	}
		num--;
  		}
  		if(dot){
  			X2.erase(num-1, len);
		}
		else{
			X2.erase(num, len);
		}  
  		num=0;
		output="x1 = "+X1+"\nx2 = "+X2;
		return output;
	}
	else if(d==0){
		float x;
		x=-B/(2*A);
		output="x = "+to_string(x);
		return output;
	}
	else{
		output="There is no real roots (the roots are complex)";
		return output;
	}
}

signed main(){
    ifstream test("test.txt");
	if(test.is_open()){
		string input,output,temp;
        string A,B,C;
		int test_num=1;
		int line = 0;
		while (getline(test,temp))
        {
			if(line==0){
            	A=temp;
			}
            else if(line==1){
            	B=temp;
			}
            else if(line==2){
            	C=temp;
			}
			else if(line==3){
				output+=temp;
			}
			else{
				output+="\n"+temp;
			}
			if(line==3){
				double d;
				double a,b,c;
				a=stof(A);
				b=stof(B);
				c=stof(C);
				d=(b*b)-(4*a*c);
				if(d==0||d<0){
					if(soal1(A,B,C)==output||soal2(A,B,C)==output){
		                cout<<"Test "<<test_num<<" passed!\n";
			        }
		            else{
		                cout <<"Test "<<test_num<<" failed.\nExpected output : \n"<<output<<"\nOutput : \n"<<soal1(A,B,C)<<"\n";
		            }
		            test_num++;
		            line=-1;
		            temp="";
		            output="";
				}
			}
			if(line==4){
				if(soal1(A,B,C)==output||soal2(A,B,C)==output){
                cout<<"Test "<<test_num<<" passed!\n";
	            }
	            else{
	                cout <<"Test "<<test_num<<" failed.\nExpected output : \n"<<output<<"\nOutput : \n"<<soal1(A,B,C)<<"\n";
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