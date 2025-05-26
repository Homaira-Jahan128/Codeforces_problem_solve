#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int ct=0;
        if(a[0]!='a') ct++;
        if(a[1]!='b') ct++;
        if(a[2]!='c') ct++;
        if(ct==3) cout<<"NO\n";
        else cout<<"YES\n";

    }

    return 0;  
}