#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       string s;
       cin>>s;
       int x=0,y=0,z=0;
       for(int i=0;i<s.size();i++){
            if(s[0]!=s[i]) x=1;
            if(s[i+1]-s[i]!=1) y=1;
            if(s[i+1]-s[i]!=-1) z=1;

       }
       string s1=s;
       reverse(s1.begin(),s1.end());
       if(s != s1) reverse(s.begin(),s.end());
       else sort(s.begin(),s.end());

       if(x)
       cout<<"YES\n"<<s<<endl;
       else 
       cout<<"NO\n";
    }
    return 0;
} 