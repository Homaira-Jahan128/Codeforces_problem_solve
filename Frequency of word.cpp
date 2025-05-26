#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int count=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[j]-a[i]==j-i)
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;  
}