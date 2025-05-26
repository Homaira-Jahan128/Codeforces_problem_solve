#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n,k;
     cin>>n>>k;
        int a[n],sum=0;
        for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        }
        int j=0,p=n-1,count=0,x=1;
        while(x++){
            if(x%2==0 && a[j]!=0) a[j]-=1;
            else if(a[p]!=0) a[p]-=1;
            if(a[j]==0 && j+1<=n-1) j++;
            if(a[p]==0 && p-1>=0) p--;
            if(x==k+1) break;
        }

        for(int i=0;i<n;i++){
            if(a[i]==0) count++;
        }
        cout<<count<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;  
}