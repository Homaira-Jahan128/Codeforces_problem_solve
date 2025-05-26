#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int m=n+n;
        int a[m];
        for(int i=0;i<m;i++)
        cin>>a[i];
        sort(a,a+m);
        int x=0;
        for(int i=0;i<m-1;i++){
            if(i==n-1) continue;
            x+=abs(a[i]-a[i+1]);
        }
        cout<<x<<"\n";

        for(int i=0;i<n;i++)
       cout<<a[n+i]<<" "<<a[i]<<"\n";

    }
    return 0;
}