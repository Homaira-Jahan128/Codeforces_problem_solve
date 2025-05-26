#include<bits/stdc++.h>
using namespace std;

void pyramid(int n,int num);
void space(int n);
void star(int x);

int main(){
    int n;
    cin>>n;
    pyramid(n,n);
}

void pyramid(int n,int num){
    if(n==0) return ;
    space(n-1);
    star((num-n)*2+1);
    cout<<endl;
    pyramid(n-1,num);
}

void space(int n){
    if(n==0) return;
    cout<<" ";
    space(n-1);
}

void star(int x){
    if(x==0) return;
    cout<<"*";
    star(x-1);
}