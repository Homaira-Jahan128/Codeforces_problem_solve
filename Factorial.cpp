#include<bits/stdc++.h>
using namespace std;
const int modNumber= 1e9+7;

long long fact(long long n){
    if(n == 0) return 1;
    long long ans= (n * fact(n-1))%modNumber;
    return ans;
}

int main(){
    long long n;
    cin>>n;
    cout<<fact(n)<<endl;

    return 0;
} 