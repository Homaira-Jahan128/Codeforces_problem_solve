#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int a, b, c, d;
       cin>>a>>b>>c>>d;
       vector<int> v;
       if(a<b){
        for(int i=a;i<=b;i++){
            v.push_back(i);
        }
       }
       else{
        for(int i=b;i<=a;i++){
            v.push_back(b++);
        }
       }
       int c1=0,d1=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==c) c1=1;
            if(v[i]==d) d1=1;
        }
        if((c1==1 && d1==0) || (c1==0 && d1==1)) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0;
} 