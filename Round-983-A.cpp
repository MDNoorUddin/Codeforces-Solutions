    #include<bits/stdc++.h>
     
    using namespace std;
     
     
    int main(){
        int t;
        cin>>t;
     
        while(t--){
            int n;
            cin>>n;
            int x;
            int _0 = 0, _1 = 0;
            for(int i=1;i<=2*n;i++){
                cin>>x;
                if(x==0)_0++;
                else _1++;
            }
     
            int mx = min(_0,_1);
            int mn = (_0%2!=0 && _1!=0)?1:0;
     
            cout<<mn<<" "<<mx<<endl;
        }
    }
