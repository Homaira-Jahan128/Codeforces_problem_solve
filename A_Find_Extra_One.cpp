#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x[n],y[n],xp=0,xn=0;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
        if(x[i]>0) xp++;
        else if(x[i]<0) xn++;
    }
    if(xp<=1 || xn<=1) cout<<"Yes";
    else cout<<"No";

}