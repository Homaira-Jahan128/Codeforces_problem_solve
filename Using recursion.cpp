#include<bits/stdc++.h>
using namespace std;
const int modnumber=1e9+7;
int dp[1000];

int fibo(int n){
    if(n == 1 ) return 0;
    if(n ==2 ) return 1;
    if(dp[n]!= -1) return dp[n];
    int ans = (fibo(n-1) + fibo(n-2)) % modnumber;
    return ans;
}
//time complectity 0(2^n)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    cout<<fibo(n);
    
    return 0;
} 