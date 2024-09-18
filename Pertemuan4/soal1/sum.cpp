#include <bits/stdc++.h>
#define ll long long
using namespace std;

signed main(){
	ll n,ans = 0;
	cout<<"Input : ";cin>>n;
	for(ll i=n;i>0;i--){
		ans += i;
	}
	cout<<"Output: Sum = "<<ans<<"\n";
}