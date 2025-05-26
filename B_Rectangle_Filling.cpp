#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,m,n;
    cin>>t;
    while(t--){
        cin>>m>>n;
        int x=m*n;
        char a[x],w=0,b=0;
        for(int i=0;i<x;i++){
            cin>>a[i];
            if(a[i]=='W') w++;
            else b++;
        }
        int c1[4],c2[4];
        for(int i=0;i<4;i++){
            c1[i]=0;
            c2[i]=0;
        }
        for(int i=0,j=x-n;i<n,j<x;i++,j++){
            if(a[0]==a[i]) c1[0]++;
            if(a[x-n]==a[j]) c1[1]++;
        }
        for(int i=0,j=n-1;i<x,j<x;i+=n,j+=n){
            if(a[i]==a[0]) c2[0]++;
            if(a[j]==a[n-1]) c2[1]++;
        }
        if(c1[0]==n && c1[1]==n && a[0]!=a[x-n])
        cout<<"NO\n";
        else if(c2[0]==m && c2[3]==m && a[0]!=a[x-1])
        cout<<"NO\n";
        else cout<<"YES\n";        
    }
    
    return 0;  
}