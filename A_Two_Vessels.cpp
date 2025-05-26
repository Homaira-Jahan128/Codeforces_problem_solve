#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x=abs(a-b);
        if(x%2!=0) x=(x+1)/2;
        else x=x/2;
        
        if(a==b) cout<<"0\n";
        else{ 
            if(x%c==0){
            cout<<x/c<<"\n";
            }
            else 
            cout<<(x/c)+1<<"\n";
        }
    }
    
    return 0;  
}