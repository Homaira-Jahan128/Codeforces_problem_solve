#include<bits/stdc++.h>
using namespace std;
int mx=-INT_MAX;
void leftMax(vector<int> &v,int i,int n){
    if(i==n){
        return;
    }
    if(v[i]>=mx){
        mx=v[i];
    }
    cout<<mx<<" ";
    leftMax(v,i+1,n);
    
 }
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i=0;
    leftMax(v,i,n);
    return 0;
}
