#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n<m)
        cout<<"No"<<endl;
        else if((n-m)%2!=0){
            cout<<"No"<<endl;
        }
        else
        cout<<"Yes"<<endl;
    }
}