#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;

        int n;
        n=str.length();


        map<int,int> mp;
        map<int,int>::iterator it;

        int count=0;

        for(int i=0;n-i>3;i++){
            if(str[i]=='1'&&str[i+1]=='1'&&str[i+2]=='0'&&str[i+3]=='0'){
                mp[i]=1;
                count++;
            }
        }
        //cout<<"total substring "<<count<<endl;
        int q;
        cin>>q;

        while(q--){
            int j;
            char v;
            cin>>j>>v;
            j--;
            str[j]=v;

            // if(str[j]==v){
            //     cout<<count<<endl;
            //     continue;
            // }

            // 4th position

            if(n-j>0){
                //cout<<"4th\n";
                if(mp[j-3]==1){ //decrementation check
                    //cout<<"dec\n";
                    if(str[j-3]!='1'||str[j-2]!='1'||str[j-1]!='0'||v!='0')
                    {
                        count--;
                        mp[j-3]=0;
                    }

                }else{ // increment check
                    //cout<<"inc\n";
                    if(str[j-3]=='1'&&str[j-2]=='1'&&str[j-1]=='0'&&v=='0')
                    {
                        count++;
                        mp[j-3]=1;
                    }

                }
            }
            // 3rd position

            if(n-j>1){
                //cout<<"3rd\n";
                if(mp[j-2]==1){ //decrementation check
                //cout<<"dec\n";
                    if(str[j-2]!='1'||str[j-1]!='1'||v!='0'||str[j+1]!='0')
                    {
                        count--;
                        mp[j-2]=0;
                    }

                }else{ // increment check
                    //cout<<"inc\n";
                    if(str[j-2]=='1'&&str[j-1]=='1'&&v=='0'&&str[j+1]=='0')
                    {
                        count++;
                        mp[j-2]=1;
                    }

                }
            }

            // 2nd position

            if(n-j>2){
                //cout<<"2nd\n";
                if(mp[j-1]==1){ //decrementation check
                //cout<<"dec\n";
                    if(str[j-1]!='1'||v!='1'||str[j+1]!='0'||str[j+2]!='0')
                    {
                        count--;
                        mp[j-1]=0;
                    }

                }else{ // increment check
                    //cout<<"inc\n";
                    if(str[j-1]=='1'&&v=='1'&&str[j+1]=='0'&&str[j+2]=='0')
                    {
                        count++;
                        mp[j-1]=1;
                    }

                }
            }
            

            // 1st position

            if(n-j>3){
                //cout<<"first\n";
                if(mp[j]==1){ //decrementation check
                //cout<<"dec\n";
                    if(v!='1'||str[j+1]!='1'||str[j+2]!='0'||str[j+3]!='0')
                    {
                        count--;
                        mp[j]=0;
                    }

                }else{ // increment check
                    //cout<<"inc\n";
                    if(v=='1'&&str[j+1]=='1'&&str[j+2]=='0'&&str[j+3]=='0')
                    {
                        count++;
                        mp[j]=1;
                    }

                }
            }
            
            //cout<<str<<" "<<count<<endl;
            if(count>0)cout<<"yes\n";
            else cout<<"no\n";
        }
    }
}
