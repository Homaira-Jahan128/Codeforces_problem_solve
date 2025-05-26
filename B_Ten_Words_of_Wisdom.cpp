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
        cin>>a[i]>>b[i];
        int max=0,x;
        for(int i=0;i<n;i++){
            if(a[i]<=10){
                if(b[i]>max){
                    max=b[i];
                    x=i;
                }
            }
        }
        cout<<x+1<<"\n";
    }
    return 0;  
}