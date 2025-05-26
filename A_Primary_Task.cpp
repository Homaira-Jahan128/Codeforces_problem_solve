#include<bits/stdc++.h>
using namespace std;

#define nl    cout<<endl
#define yes   cout<<"YES"
#define no   cout<<"NO"

int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        //cout<<n.length(); nl;
        if((n[0]!='1' || n[1]!='0') || n[2]=='0') no;
        else if(n[2]=='1' && n.length()==3) no;
        else yes;
        nl;
    }
}