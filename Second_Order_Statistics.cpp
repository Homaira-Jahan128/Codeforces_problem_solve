#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int x=a[0],p=0;
    for(int i=0;i<n-1;i++){
        if(a[i+1]!=a[i]) p++;
    }
    if(n==1||p==0) cout<<"NO\n";
    else{
        for(int i=1;i<n;i++){
            if(a[i]!=x){
                cout<<a[i]<<endl;
                break;
            }
        }   
    }

    return 0;  
}