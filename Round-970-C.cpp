#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long l,r;
		cin>>l>>r;
		long long diff=r-l+1;
		long long pw=diff*2;
		long long ans=sqrt(pw);
		long long mul = ans*(ans+1);
		
		if(mul<pw)ans++;
		
		cout<<ans<<endl;
		
		
	}
	return 0;
}
