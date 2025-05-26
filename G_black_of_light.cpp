#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
           cin>>a[i];
        }

        long long int ans=a[0];
        sort(a,a+n);

        for(int i=1;i<n;i++){
            if(ans<a[i]){
                int x=(ans+a[i]);
                if(x%2==0){
                    ans=(x/2);
                }
                else{
                    ans=((x/2)+1);
                }
           }
        }
        cout<<ans<<endl;

    }
    return 0;
}