#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        long long int total=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
                total+=a[i];
        }
        cout<<abs(total)<<endl; 
    }
}