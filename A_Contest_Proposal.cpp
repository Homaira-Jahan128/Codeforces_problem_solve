#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int x=0,y=0,m=0;
        for(int i=n-1;i>=0;i--){
            if(b[i]<a[i]){
                m=b[i];
                x=i;
                break;
            }
        }
        
        for(int i=x;i>=0;i--){
            if(a[i]>m) y++;
        }
        cout<<x<<endl;
    }
    
    return 0;  
}