/********************************
*
*	Author: Baki Md. Noor Uddin
*	Handle: 16321
*
********************************/
#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		int a[51]={0};
		
		for(int i=0;i<n;i++){
			cin>>x;
			a[x]++;
		}
		
		int mx =0;
		
		for(int i=0;i<=50;i++){
			mx=max(mx,a[i]);
		}
		
		cout<<n-mx<<endl;
	}
}
