#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    long long int n,m,k,x=0;
    cin>>n>>m>>k;
        if(n<=m && n<=k){
            x=n;
        }
        else if(k<=m && k<=n){
            x=k;
        }
        else if(m<=n && m<=k){
            if(m==0){
                if(n>=k*2) x=k;
                else x=n/2;
            }
            else{
                x=m;
                n-=m;
                k-=m;
                if(n>=k*2) x+=k;
                else x+=n/2;
            }
        }
        cout<<x;

    return 0;  
}