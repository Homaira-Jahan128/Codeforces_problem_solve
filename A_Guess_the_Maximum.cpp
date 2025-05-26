#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int max=INT_MAX;
        for(int i=0;i<n-1;i++){
            if(a[i]<a[i+1] && a[i+1]<=max){
                max=a[i+1]-1;
            }
            else if(a[i+1]<a[i] && a[i]<=max){
                max=a[i]-1;
            }
            else if(a[i]==a[i+1] && a[i]<=max){
                max=a[i]-1;
            }
        }
        cout<<max<<endl;
    }
}