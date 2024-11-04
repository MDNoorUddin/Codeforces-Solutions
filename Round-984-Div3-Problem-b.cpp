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
		int n,k;
		cin>>n>>k;
		int b,c;
		map<int,int> mp;
		map<int,int>::iterator it;
		for(int i=0;i<k;i++){
			cin>>b>>c;
			mp[b]=mp[b]+c;
		}
		priority_queue<int> q;
		it=mp.begin();
		while(it!=mp.end()){
			//cout<<it->first<<" "<<it->second<<endl;
			q.push(it->second);
			it++;
		}
		int x=mp.size();
		int count=min(x,n);
		int sum=0;
		while(count--){
			sum+=abs(q.top());
			//cout<<q.top()<<" ";
			q.pop();
		}
		cout<<sum<<endl;
	}
}
