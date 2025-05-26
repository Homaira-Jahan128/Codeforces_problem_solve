#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<string> s;

    for(int i=0;i<n;i++){
        string s1;
        getline(cin,s1);
        s.insert(s1);
    }
    cout<<s.size();
    // for(auto it:s){
    //     cout<<it<<endl;
    // }
}