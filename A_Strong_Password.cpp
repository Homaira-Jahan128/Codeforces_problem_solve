#include<bits/stdc++.h>
using namespace std;
#define nl cout<<endl;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()==1){
            char s2 = s[0]+1;
            cout<<s2<<s<<endl;
        }
        else{
            cout<<s[0];
            for(int i=1;i<s.size();i++){
                if(s[i-1]==s[i]){
                    if(s[i]=='a') cout<<"b";
                    else if(s[i]=='z') cout<<"y";
                    else cout<<s[i]+1;
                }
                cout<<s[i];
            }
            
        }
        nl;
    }
}