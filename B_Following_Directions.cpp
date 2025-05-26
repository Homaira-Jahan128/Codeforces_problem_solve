#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char st[n+1];
        cin>>st;
        int ud=0,rl=0,x=0;
        for(int i=0;i<n;i++){
            if(st[i]=='U') ud++;
            else if(st[i]=='D') ud--;
            else if(st[i]=='R') rl++;
            else if(st[i]=='L') rl--;
            if(ud==1 && rl==1) x=1;
        }
        if(x>0) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;  
}