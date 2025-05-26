#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,x,k;
    cin>>t;
    while(t--){
        cin>>x>>k;
        int y,z;
        for(int i=0;;i++){
           y=x;
           z=0;
           for(int i=0;y!=0;i++){
            z=z+y%10;
            y/=10;
           }
           if(z%k==0){
            cout<<x<<"\n";
            break;
           }
           else x+=1;
        }
    }
    return 0;
}