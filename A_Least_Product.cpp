#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],x=0,y=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<0) x++;
            if(a[i]==0) y++;
        }
        if(x%2!=0 || y>0) cout<<"0\n";
        else cout<<"1\n1 0\n";
    }

    return 0;  
}