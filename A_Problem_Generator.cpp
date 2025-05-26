#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        map<char,int> mp;
        for(int i=0;i<7;i++){
            char x=65+i;
            mp[x]=0;
        }
        for(int i=0;i<n;i++){
            char x;
            cin>>x;
            mp[x]++;
        }
        int ans=0;
        for(auto it : mp){
            if(it.second < m){
            ans=ans+(m-it.second);
            }
        }
        cout<<ans<<endl;
    }
}