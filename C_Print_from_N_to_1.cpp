#include<bits/stdc++.h>
using namespace std;

void repeat(int n){
    if(n==0) return;
    repeat(n/2);
    cout<<((n%2==0) ? 0:1);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        repeat(n);
        cout<<endl;
    }
} 