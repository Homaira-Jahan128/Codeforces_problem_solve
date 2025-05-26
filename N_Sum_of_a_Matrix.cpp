#include<bits/stdc++.h>
using namespace std;

void MatrixSum(int l,int a[],int b[],int c){
    if(l<0) return;
    MatrixSum(l-1,a,b,c);
    cout<<a[l]+b[l]<<" ";
    if((l+1)%c==0) cout<<endl;
}

int main(){
    int r,c;
    cin>>r>>c;
    int l=r*c;
    int a[l],b[l];
    for(int i=0;i<l;i++){
        cin>>a[i];
    }
    for(int i=0;i<l;i++){
        cin>>b[i];
    }
    MatrixSum(l-1,a,b,c);
} 