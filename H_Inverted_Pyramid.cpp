#include<bits/stdc++.h>
using namespace std;

void inverted_pyramid(int n,int num);
void space(int s);
void star(int x);

int main(){
    int n;
    cin>>n;
    inverted_pyramid(n,n);
}

void inverted_pyramid(int n,int num){
    if(n==0) return;
    space(num-n);
    star(n*2-1);
    cout<<endl;
    inverted_pyramid(n-1,num);
}

void space(int s){
    if(s==0) return;
    cout<<" ";
    space(s-1);
}

void star(int x){
    if(x==0) return ;
    cout<<"*";
    star(x-1);
}