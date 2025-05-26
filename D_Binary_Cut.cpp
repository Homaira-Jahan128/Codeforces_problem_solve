#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       string b;
       cin>>b;
       int ct=0,x=0;
       for(int i=1;i<b.size();i++){
        if(b[i-1]!=b[i]){
            ct++;
            x=1;
        }
       }

       if(x == 0 || (ct == 1 && b[0] == '1')) 
       cout<<ct+1<<endl;
       else
       cout<<ct<<endl;
    }
    return 0;
} 