#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int k=(a+b)/4;
        if(k>a)
        cout<<a<<"\n";
        else if(k>b) cout<<b<<"\n";
        else cout<<k<<"\n";
    }
    return 0;  
}