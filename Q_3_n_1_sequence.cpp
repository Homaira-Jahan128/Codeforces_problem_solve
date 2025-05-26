#include<bits/stdc++.h>
using namespace std;
long long cnt=1;

long long sequence(long long n) {
    if(n==1) return cnt;
    cnt++;
    if(n%2!=0) sequence(n*3+1);
    else sequence(n/2);
}

int main() {
    int n;
    cin>>n;
    cout<<sequence(n);
}
