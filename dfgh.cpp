#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int max=0,x=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a != i){
                max=a & i;
                if(max>x){
                    x=max;
                }
            }
        } 
    }


    return 0;
} 