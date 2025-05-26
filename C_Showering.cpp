#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        int l[n],r[n];
        for(int i=0;i<n;i++){
            cin>>l[i]>>r[i];
        }
        int cnt=0;
        if(l[0]>=s || (m-r[n-1]>=s)) cnt++;

        for(int i=1;i<n;i++){
            if((l[i]-r[i-1]) >= s) cnt++;
        }

        if(cnt) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}