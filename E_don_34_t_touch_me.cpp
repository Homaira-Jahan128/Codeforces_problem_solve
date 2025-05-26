#include<bits/stdc++.h>
using namespace std;

void solve(string s,int x){
    int ans;
    for(int i=0;i<s.size();i++){
        string s1=s.substr(i,s.size()-i);
        string s2=s1;
        reverse(s1.begin(),s1.end());
        if(s1==s2){
            ans=i+s.size();
            cout<<"Case "<<x<<": "<<ans<<endl;
            return;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string s;
        cin>>s;
        int ans=0;
        solve(s,i);
    }
    return 0;
}