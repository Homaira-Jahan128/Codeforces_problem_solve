#include<bits/stdc++.h>
using namespace std;

void repeat(int i,int a[]){
    if(i<0) return;
    if(i%2==0) cout<<a[i]<<" ";
    repeat(i-1,a);
    
}

int main(){
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    repeat(t-1,a);
} 