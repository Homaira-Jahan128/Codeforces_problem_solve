#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,x=0,a,b;
    cin>>t;
    while(t--){
        ++x;
        cin>>a>>b;
        cout<<"Case "<<x<<": "<<a+b<<endl;
    }

    return 0;  
}