#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        int b,c,h;
        cin>>b>>c>>h;
        int x=c+h;
        //cout<<x<<"\n";
        if(b-1<=x) 
        cout<<b+b-1<<"\n";
        else
        cout<<x+x+1<<"\n";
        

    }
    return 0;  
}