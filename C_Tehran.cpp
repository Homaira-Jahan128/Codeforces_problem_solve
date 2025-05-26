#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;
    while(n--){
        int x;
        cin>>x;
        if(x==0){
            int a;
            cin>>a;
            v.push_back(a);
        }
        else if(x==1){
            int a;
            cin>>a;
            cout<<v[a]<<endl;
        }
        else{
            v.pop_back();
        }

    }
}