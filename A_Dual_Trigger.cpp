#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char lt[n+1];
        cin>>lt;
        int count=0;
        for(int i=0;i<n;i++){
            if(lt[i]=='1') count++;
        }
        int x=0;
        if(count==2){
            for(int i=0;i<n-1;i++){
            if(lt[i]=='1' && lt[i+1]=='1') x=1;
        }
        }
        if(count%2!=0 || x==1) cout<<"NO\n";
        else if(count%2==0) cout<<"YES\n";
    }
    return 0;  
}