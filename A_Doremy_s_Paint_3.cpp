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
        int x=a[1]-a[0],z=0;
        for(int i=0;i<n-1;i++)
        if(a[i+1]-a[i]!=x){
            z++; break;
        }
        if(z>0) cout<<"No\n";
        else cout<<"Yes\n";
    }
    return 0;  
}