#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,k;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    sort(a,a+t);
    int x=0;
    for(int i=0;i<t;i++){
        if(a[i]!=a[0]){
            x=a[i];
            break;
        }
    }
    if(x!=0)cout<<x;
    else cout<<"NO\n";

    
    
    return 0;  
}