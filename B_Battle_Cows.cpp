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
        int x=a[k-1],z=0,y=0;
        for(int i=k-1;i>=0;i--){
            if(x<a[i]){
                z=k-i-2;
                break;
            }
        }
        for(int i=k-1;i<n;i++){
            if(x<a[i]){
                y=i-k-2;
                break;
            }
        }
        int p=0;
        for(int i=k-1;i>=0;i--){
            if(x<a[i]){
                p++;
            }
        }
        if(z==y){
            if(p>0) cout<<z<<"\n";
            else  cout<<z+1<<"\n";
        }
        else if(z>y) cout<<z<<"\n";
        else cout<<y<<"\n";

    }
    return 0;  
}