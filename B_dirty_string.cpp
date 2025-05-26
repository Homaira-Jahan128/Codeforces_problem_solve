#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    for(int j=1;j<=t;j++){
        string s1,s2;
        cin>>s1>>s2;
        int s=s2.size(),cnt=0;
        for(int i=0;i<s1.size();i++){
            string sub=s1.substr(i,s);
            if(sub==s2){
                cnt++;
            }
        }
        cout<<"Case "<<j<<": "<<cnt<<endl;
    }
    return 0;
}