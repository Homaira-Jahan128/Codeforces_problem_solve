#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<char> v;
        for(int i=0;i<s.length();i++){
            v.push_back(s[i]);
        }
        for(auto i=0;i<s.size();i++){
            auto it = find(v.begin()+i+1,v.end(),v[i]);
            if(it != v.end()){
                v.erase(it);
            }
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
    }
}