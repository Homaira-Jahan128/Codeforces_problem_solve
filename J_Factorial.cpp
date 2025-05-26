#include<bits/stdc++.h>
using namespace std;

long long repeat(long long n){
   if(n==1) return 1;
   return repeat(n-1)*n;
}

int main(){
    long long t;
    cin>>t;
    cout<<repeat(t);
} 