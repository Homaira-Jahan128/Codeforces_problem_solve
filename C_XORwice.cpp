#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    long long int t,a,b;
    cin>>t;
while(t--){
        cin>>a>>b;
        long long int m=(1<<30)-1;
        long long int x=(b^m);
        cout<<x<<endl;
    }
    
    return 0;  
}