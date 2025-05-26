#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0,height=0;
        for(int i=1;i<=n;i++){
            cnt+=i;
            if(cnt<=n){
                height++;
            }
            if(cnt>=n) break;
        }
        cout<<height<<endl;
    }
    return 0;
}