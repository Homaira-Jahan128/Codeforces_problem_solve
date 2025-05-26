#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[5],x=0;
        a[0]=1;
        for(int i=4;i>0;i--){
            a[i]=n%10;
            if(a[i]==0) a[i]=10;
            n/=10;
        }
        for(int i=0;i<4;i++){
            x=x+abs(a[i]-a[i+1])+1;
        }
        cout<<x<<"\n";
    }
}