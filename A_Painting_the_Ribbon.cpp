#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,m,k;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        if(n%m==0 && (n-n/m)<=k)
        cout<<"NO\n";
        else if(n%m!=0 && (n-n/m-1)<=k)
        cout<<"NO\n";
        else cout<<"YES\n";
    }

    return 0;  
}