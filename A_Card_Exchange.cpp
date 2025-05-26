#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        int x=0;
        for(auto v:mp){
        if(k<=v.second) x=1;
        }
        if(x==1) cout<<k-1<<endl;
        else cout<<n<<endl;
    }
    
    return 0;  
}