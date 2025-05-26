#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,m,n;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n>=m) cout<<n<<"\n";
        else cout<<m<<"\n";
    }

    return 0;  
}