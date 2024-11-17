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
		int n;
		cin>>n;
		int a[n+2];
		a[0]=-1;
		a[n+1]=-1;
		
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		
		int flag = 1;
		for(int i=1;i<=n;i++){
			if(i==a[i-1]||i==a[i]||i==a[i+1]){
				continue;
			}
			else{
				flag = 0;break;
			}
		}
//		for(int i=0;i<=n+1;i++){
//			cout<<a[i]<<" ";
//		}
		cout<<endl;
		if(flag)
		cout<<"yes\n";
		else
		cout<<"no\n";
	}
}
