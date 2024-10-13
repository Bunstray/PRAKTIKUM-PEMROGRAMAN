#include <bits/stdc++.h>
#define ll long long
using namespace std;

void fizzbuzz(){
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
	for(int i=0;i<100;i++){
		cout<<ans[i]<<"\n";
	}
}

void reversearray(){
    vector<string> v;
	string n;
    cout<<"Type \"[\" to start the array and \"]\" to end the array (make sure to put space beforehand). Use Space to separate different value\n";
    cin>>n;
	if(n=="["){
		while(cin>>n){
			if(n=="]"){
				break;
			}
			v.insert(v.begin(),n);
		}
		ll len=v.size();
		cout<<"[ ";
		for(int i=0;i<len;i++){
			cout<<v[i]<<" ";
		}
		cout<<"]\n";
	}		
}

signed main(){
	cout<<"Choose what program to run :\n1.FizzBuzz\n2.Reverse array\n(Only type the numbering value)\n";
    int n;
    cin>>n;
    if(n==1){
        fizzbuzz();
    }
    else if(n==2){
        reversearray();
    }
    else{
    	cout<<"Error 404";
    	return 404;
	}
}