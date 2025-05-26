#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    cin>>a[i];
    sort(a,a+t);
    int x=0,y=0,z=0;
    if(a[0]!=a[1]) cout<<a[0]<<"\n";
    else if(a[t-2]!=a[t-1] )
    cout<<a[t-1]<<"\n";
    else{
        for(int i=0;i<t;i++){
            if(a[i-1]!=a[i] && a[i+1]!=a[i]){
                cout<<a[i]<<"\n";
                break;
            }
        }
    }
    return 0;  
}