#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        s[n]='/0';
        int ans=1;
        for(int i=0;i<n;i++){
            if(s[i]>=65 && s[i]<=59){
                ans=0;
                break;
            }
            if((s[i]>s[i+1]) && i!=n-1){
                ans=0;
                break;
            }
        }
        if(ans) cout<<"YES\n";
        else cout<<"NO\n";
    }
}