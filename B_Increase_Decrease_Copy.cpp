#include<bits/stdc++.h>
using namespace std;
#define ll long long int;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int ab=0;
        for(int i=0;i<=n;i++){
            cin>>b[i];
        }

        int al=b[n],dif1=INT_MAX,dif2=INT_MAX,x1=0,x2=0;
        long long ans=0;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                ans+=(b[i]-a[i]);
                if(al<=b[i] && al>=a[i]){
                    ab=1;
                }
            }
            else{
                ans+=(a[i]-b[i]);
                if(al>=b[i] && al<=a[i]){
                    ab=1;
                }
            }
            if(dif1>abs(b[i]-al)){
                dif1=abs(b[i]-al);
                x1=b[i];
            }
            if(dif2>abs(a[i]-al)){
                dif2=abs(a[i]-al);
                x2=a[i];
            }
        }
        if(ab==1){
            cout<<ans+1<<endl;
        }
        else{
            if(dif1<=dif2){
                cout<<ans+abs(x1-al)+1<<endl;
            }
            else{
                cout<<ans+abs(x2-al)+1<<endl;

            }
        }

    }
}