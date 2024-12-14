#include<bits/stdc++.h>>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int count =0,l=0;
		while(n--){
			string str;
			cin>>str;
			l+=str.length();
			if(l<=m){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
