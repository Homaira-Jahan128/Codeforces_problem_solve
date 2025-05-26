#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,c,d;
    cin>>t;
    while(t--){
        cin>>n>>c>>d;
        int m=n*n;
        int a[m];
        for(int i=0;i<m;i++)
        cin>>a[i];
        sort(a,a+m);
        int x=0,y=0,b[m],k=1;
        b[0]=a[0];
        for(int i=1;i<m;i++){
            if(i%n==0){
                b[i]=b[0]+c*k;
                k++;
            }
            else b[i]=b[i-1]+d;
        }
        sort(b,b+m);
        for(int i=0;i<m;i++){
            if(a[i]!=b[i]) x=1;
        }
        if(x==1) cout<<"NO\n";
        else cout<<"YES\n";
    }

    return 0;  
}