#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
       cin>>n;
       char s[n];
       int ct=0;
       for(int i=0;i<n;i++){
           cin>>s[i];
           if(s[i]=='U') ct++;
       }
       if(ct % 2 != 0) cout << "YES"<<endl;
       else cout << "NO\n";
    }
    return 0;
} 