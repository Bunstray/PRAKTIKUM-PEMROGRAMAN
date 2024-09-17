#include <bits/stdc++.h>
using namespace std;

signed main(){
	int n,ans = 0;
	cout<<"Input : ";cin>>n;
	for(int i=n;i>0;i--){
		ans += i;
	}
	cout<<"Output: Sum = "<<ans<<"\n";
	cout<<"(Explanation : ";
	for(int i=1;i<=n;i++){
		if(i!=n){
			cout<<i<<" + ";
		}
		else{
			cout<<i<<" = "<<ans<<")\n";
		}
	}
}