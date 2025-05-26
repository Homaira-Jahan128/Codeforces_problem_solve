#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,g=0,count=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>=k){
                g+=a[i];
            }
            else if(a[i]==0 && g!=0){
                a[i]+=1;
                g--;
                count++;
            }
        }
        cout<<count<<endl;
    }
}