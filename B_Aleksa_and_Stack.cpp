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
        a[0]=1;a[1]=2;
        cout<<a[0]<<" "<<a[1];
        int k=2;
        for(int i=1;k!=n;i++){
            int x=a[k-2]+a[k-1];
            a[k]=a[k-1]+i;
            if(3*a[k]%x!=0){
                a[k++]=a[k-1]+i;
                cout<<a[k]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;  
}