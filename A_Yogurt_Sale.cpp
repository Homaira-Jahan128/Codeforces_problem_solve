#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,a,b;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        if(a*2<=b){
            cout<<n*a<<"\n";
        }
        else{
            if(n%2==0) 
            cout<<b*(n/2)<<"\n";
            else cout<<b*(n/2)+a<<"\n";
        }
    }

    return 0;  
}