#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x , y;
        cin>>x>>y;
        int count=0;
        if(y==0){
            int ans=x/15+((x%15==0) ? 0 : 1);
            cout<<ans<<endl;
        }
        else if(y%2==0){
            int total=(y/2)*7;
            if(total>=x){
                cout<<y/2<<endl;
            }
            else{
                int ans=y/2+((x-total)/15+(((x-total)%15==0) ? 0:1));
                cout<<ans<<endl;
            }
        }
        else{
            int total=(y/2)*7+11;
            if(total>=x){
                cout<<(y/2)+1<<endl;
            }
            else{
                int ans=(y/2)+1+((x-total)/15+(((x-total)%15==0) ? 0:1));
                cout<<ans<<endl;
            }
        }
    }
    return 0;
} 