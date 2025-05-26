#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int a[n],x=10;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<x) x=a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]==x){
                a[i]++;
                break;
            }
        }
        int mul=1;
        for(int i=0;i<n;i++){
            mul*=a[i];
        }
        cout<<mul<<endl;
    }
}