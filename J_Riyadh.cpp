#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    if(a==b){
        cout<<"-1";
    }
    else{
        for(int i=0;i<v.size();i++){
            if(v[i]!=a && v[i]!=b){
                cout<<v[i];
            }
        }
    }
}