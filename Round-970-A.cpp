#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int one,two;
		cin>>one>>two;
		
		two=two%2;
		 if(two==0){//0
		 	if(one%2)cout<<"no\n";
		 	else cout<<"yes\n";
		 }
		 else{//1
		 	if(!one)cout<<"no\n";
		 	else if(one%2)cout<<"no\n";
		 	else cout<<"yes\n";
		 	
		 }
		
		//cout<<one<<two<<endl;
	}
	return 0;
}
