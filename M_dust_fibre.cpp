#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int ,int> mp;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            mp[a]++;
        }
        for(auto it:mp){
            if((it.second)%2==1){
                cout<<it.first<<endl;
            }
        } 
    }
    return 0;
}