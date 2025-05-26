#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
        int x=0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]) x++;
        }
        cout<<x<<"\n";
    }
}