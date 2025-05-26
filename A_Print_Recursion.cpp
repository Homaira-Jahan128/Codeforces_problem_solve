#include<bits/stdc++.h>
using namespace std;

void repeat(int n){
    if(n==0) return ;
    repeat(n-1);
    cout<<"I love Recursion\n";
}

int main(){
    int t;
    cin>>t;
    repeat(t);
    return 0;
} 