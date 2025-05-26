#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],b=0,m=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0) m+=a[i];
            else b+=a[i];
        }
        if(m>b) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;  
}