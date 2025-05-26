#include<bits/stdc++.h>
using namespace std;
int maximum = -INT_MAX;

void max(int n, int a[]){
    if(n<0) return ;
    if(a[n]>maximum){
        maximum=a[n];
    }
    max(n-1,a);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    max(n-1,a);
    cout<<maximum;
}