#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,x,k;
    cin>>t;
    while(t--){
        cin>>x>>k;
        if(x%k!=0) cout<<"1\n"<<x<<"\n";
        else
        cout<<"2\n"<<x-1<<" 1\n";

    }
    return 0;  
}