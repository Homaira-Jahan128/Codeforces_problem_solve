#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char a[n+1];
        cin>>a;
        int x=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    cout<<a[i];
                    i=j;
                    break;
                }
            }
        }
        cout<<"\n";
    }
}