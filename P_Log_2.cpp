#include<bits/stdc++.h>
using namespace std;
#define int long long int
int calculateLog2(int n,int i,int rs) {
    if (rs>n){
        return i-1;
    }
    if(rs==n){
        return i;
    }
    rs*=2;
    i++;
    calculateLog2(n,i,rs);
}

int main() {
    int n;
    cin>>n;
    int i=0,rs=1;
    int result=calculateLog2(n,i,rs);
    cout<<result<<endl;
    return 0;
}
