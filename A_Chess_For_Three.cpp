#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int p[3];
       cin>>p[0]>>p[1]>>p[2];
       sort(p,p+3);
       int ans;
       ans=p[0];
       p[2]=p[2]-p[0];
       p[0]=0;
       sort(p,p+3);
       ans+=p[1];
       p[2]=p[2]-p[1];
       if(p[2] % 2 != 0)
       cout<<"-1"<<endl;
       else 
       cout<<ans<<endl;
    }
    return 0;
} 