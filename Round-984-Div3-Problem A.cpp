#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int i=0;i<n;i++)cin>>a[i];
		int flag = 1;
		
		for(int i=1;i<n;i++){
			if(abs(a[i]-a[i-1])!=7 && abs(a[i]-a[i-1])!=5){
				flag = 0;
				break;
			}
		}
		
		if(flag){
			cout<<"yes\n";
		}
		else{
			cout<<"no\n";
		}
	}
}