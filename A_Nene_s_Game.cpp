#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,k,q;
    cin>>t;
    while(t--){
       cin>>k>>q;
       int a[k],n[q];
       for(int i=0;i<k;i++)
       cin>>a[i];
       for(int i=0;i<q;i++)
       cin>>n[i];
       sort(a,a+k);
       int x=a[0];
       for(int i=0;i<q;i++){
        if(n[i]>=x) cout<<x-1<<" ";
        else cout<<n[i]<<" ";
       }
       cout<<"\n";
    }
    return 0;  
}