#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        int x=0,max=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
             while(1){
                if(v[i]!=v[v[i]]){
                max=v[i] & i;
                if(max >= x){
                    x=max;
                }
                swap(v[i],v[v[i]]);
               }
               if(v[i]==i)
               break;
            }
        }
        cout<<x<<endl;
        
    }
    return 0;
} 