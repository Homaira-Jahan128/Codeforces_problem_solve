#include<bits/stdc++.h>
using namespace std;

#define nl    cout<<endl
#define yes   cout<<"YES"
#define no   cout<<"NO"

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int a[3];
        a[0]=abs(x-y)+abs(z-y);
        a[1]=abs(x-z)+abs(y-z);
        a[2]=abs(y-x)+abs(z-x);
        sort(a,a+3);
        cout<<a[0];
        nl;
       
    }
}