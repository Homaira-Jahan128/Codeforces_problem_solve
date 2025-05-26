#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int count=0,a=0;
        for(int i=0;i<n;i++){
            count +=s[i].length();
            if(count<=m){
                a++;
            }
            else break;
        }
        cout<<a<<endl;
    }
}