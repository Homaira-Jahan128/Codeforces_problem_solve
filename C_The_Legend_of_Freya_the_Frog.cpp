#include<bits/stdc++.h>
using namespace std;

#define nl    cout<<endl
#define yes   cout<<"YES"
#define no   cout<<"NO"

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k,ans;
        cin>>x>>y>>k;
        
        if(x>y && x>=k){
            if(x%k==0) ans=(x/k)*2-1;
            else ans=(x/k)*2+1;
            if(x==k && y!=0) ans=2;
            
        }
        else if(y>=x && y>=k){
            ans=(y/k);
            if(y%k!=0) ans++;
            ans*=2;
        }
        else{
            if(x==0 && y==0) ans=0;
            else if(y==0) ans=1;
            else ans=2;
        }
        cout<<ans;
        nl;
       
    }
}