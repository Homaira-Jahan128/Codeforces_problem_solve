#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        int count=0;
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]) count++;
        }
        cout<<count<<"\n";
    }

    return 0;  
}