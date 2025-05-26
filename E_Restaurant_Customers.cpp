#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    int a[t],b[t];
    //map<int, int> mp;
    for(int i=0;i<t;i++){
        cin>>a[i]>>b[i];
    }
    int max=0,ct=0;
    for(int i=0;i<t;i++){
        ct=0;
        for(int j=0;j<t;j++){
            if(a[j]>=a[i] && a[j]<=b[i]){
                ct++;
            }
        }
        if(ct>max) max=ct;
    }
    
    cout<<max;
    return 0;  
}