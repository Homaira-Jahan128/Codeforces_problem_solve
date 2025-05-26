#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int cnt=0,max=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                cnt++;
                if(cnt>=max) {
                max=cnt;
                }
            }
            else cnt=0;
            
        }
        cout<<max<<"\n";

    }

    return 0;  
}