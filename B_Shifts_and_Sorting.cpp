#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<int, char> mp1,mp2;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') mp1[i]=0;
            else mp2[i]=1;
        }
        int x,z;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                mp1.erase(i);
            }
            else break;
        }
        for(int i=0;i<x;i++){
            
        }
        if(mp1.size()<=mp2.size())
        z=mp1.size();
        else z=mp2.size();
        
        int total=0;
        for(auto v:mp1){
            total+=(v.frist)
        }



    }
    
    return 0;  
}