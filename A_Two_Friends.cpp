#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        map<int,int> mp;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            mp[x]=i;        
        }
        int a=0;
        for(auto v:mp){
            for(auto v1:mp){
                if(v.first==v1.second && v1.first==v.second) 
                a=1;
            }
        }
        if(a==1) cout<<"2\n";
        else cout<<"3\n";
    }
    
    return 0;  
}