#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int x=0;
        for(int i=0;n!=0;i++){
            x+=n;
            n/=2;
        }
        cout<<x<<"\n";
    }
    return 0;  
}                    