#include<bits/stdc++.h>
using namespace std;
long long sum = 0;

void summation(int n, long long a[],int m){
    if(m==0) return ;
        sum+=a[n];
    summation(n-1,a,m-1);
}

int main(){
    int n,m;
    cin>>n>>m;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    summation(n-1,a,m);
    cout<<sum;
}