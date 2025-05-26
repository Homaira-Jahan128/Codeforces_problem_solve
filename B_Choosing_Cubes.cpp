#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,f,k;
    cin>>t;
    while(t--){
        cin>>n>>f>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int fav=a[f-1];
        sort(a,a+n,greater<int>());
        int favCT = count(a,a+n,fav);
        int cnt=0;
        for(int i=k;i<n;i++){
            if(a[i]==fav) cnt++;
        }
        
        if(cnt!=0){
            if(cnt==favCT) cout<<"NO"<<endl;
            else cout<<"MAYBE"<<endl;
        }
        else cout<<"YES"<<endl;
        //cout<<cnt<<endl;
    }
}