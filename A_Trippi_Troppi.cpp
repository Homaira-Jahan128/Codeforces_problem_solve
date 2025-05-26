#include<bits/stdc++.h>
using namespace std;

#define nl    cout<<endl;
#define yes   cout<<"YES"
#define no   cout<<"NO"

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        cout<<s[0];
        for(int i=1;s[i]!='\0';i++){
            if(s[i-1]==' ') cout<<s[i];
        }
        nl
    }
}