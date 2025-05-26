#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        map<int ,int> mp;
        int n,c;
        cin>>n>>c;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            mp[a]++;
        }
        int m1=0,m2=0;
        for(auto it : mp){
            if(it.second<c){
                m1+=it.second;
            }
            else{
                m2++;
            }
        }
        long long int ans=m1+m2*c;
       cout<<ans<<endl;
    }
    return 0;
}