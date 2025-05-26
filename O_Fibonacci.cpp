#include<bits/stdc++.h>
using namespace std;
int ans=0;
int fibonacci(int a,int b,int n){
    if(n<=0) return a;
    fibonacci(b,b+a,n-1);
}

int main(){
    int n,a1,a2;
    a1=0,a2=1;
    cin>>n;
    cout<<fibonacci(a1,a2,n-1);
} 