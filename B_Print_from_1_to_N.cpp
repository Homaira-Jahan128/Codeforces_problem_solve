#include<bits/stdc++.h>
using namespace std;

void repeat(int n){
    if(n==0) return;
    cout<<n<<endl;
    repeat(n-1); 
}

int main(){
    int t;
    cin>>t;
    repeat(t);
    return 0;
} 