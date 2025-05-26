#include<bits/stdc++.h>
using namespace std;

#define nl    cout<<endl
#define yes   cout<<"YES"
#define no   cout<<"NO"

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int a[n];
        for(int i=n-1;i>=0;i--){
            string s1="#";
            size_t found=s[i].find(s1);
            if (found != string::npos) 
            cout<<found+1<<" ";
        }
        
        nl;
    }
}