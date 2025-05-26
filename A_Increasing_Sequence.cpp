#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int max=0,x=0;
        for(int i=0,j=1;i<n;i++,j++){
            if(a[i]!=j) b[i]=j;
            else{
                b[i]=j+1;
                j+=1;
            }
        }
        cout<<b[n-1]<<"\n";
    }
    return 0;  
}