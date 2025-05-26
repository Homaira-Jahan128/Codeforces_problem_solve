#include<bits/stdc++.h>
using namespace std;

#define nl    cout<<endl
#define yes   cout<<"YES"
#define no   cout<<"NO"

int main(){
    int t;
    cin>>t;
    while(t--){
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        int a[101];
        for(int i=0;i<101;i++) a[i]=0;

        for(int i=l1;i<=r1;i++){
            a[i]++;
        }
        int cnt=0,one=1,x=1;
        for(int i=l2;i<=r2;i++){
            a[i]++;
            if(a[i]==2) one=0;

        }
        for(int i=1;i<101;i++){
            if(a[i]==2) cnt++;
            if(a[i-1]==1 && a[i]==2)cnt++;
            if(a[i-1]==2 && a[i]==1)cnt++;
            if(a[i-1]==1 && a[i]!=1) x=0;

        }
        if(x && one) cout<<1;
        else if(cnt==0) cout<<0;
        else 
        cout<<cnt-1;
        nl;

    }
}