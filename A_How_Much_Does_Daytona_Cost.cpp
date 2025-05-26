#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int count=0,x=0;
        for(int i=0;i<n;i++){
            if(a[i]==k)
                count++;
        }
        if(count>0) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;  
}