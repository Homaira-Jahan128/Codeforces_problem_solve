#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        if(b[n-1]!=a[n-1]){
            cout<<b[n-1]+a[n-1]<<endl;
        }
        else{
            cout<<b[n-2]+a[n-1]<<endl;
        }
    }
}