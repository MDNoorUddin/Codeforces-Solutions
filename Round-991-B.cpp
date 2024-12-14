#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		long long sum=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		long long av=sum/n;
		if(av*n!=sum){
			cout<<"no\n";
			continue;
		}
		for(int i=0;i<n-2;i++){
			if(a[i]>av){
				a[i+2]+=(a[i]-av);
				a[i]=av;
			}else if(a[i]<av){
				a[i+2]-=(av-a[i]);
				a[i]=av;
			}
		}
		bool x=true;
		for(int i=0;i<n;i++){
			//cout<<a[i]<<" ";
			if(a[i]!=av){
				x=false;
				break;
			}
		}
		//cout<<endl;
		if(x)
		cout<<"yes\n";
		else cout<<"no\n";
	}
	return 0;
}
