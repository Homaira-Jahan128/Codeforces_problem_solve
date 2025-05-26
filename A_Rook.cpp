#include<bits/stdc++.h>
using namespace std;

#define nl    cout<<endl
#define yes   cout<<"YES"
#define no   cout<<"NO"

int main(){
    int t;
    cin>>t;
    // int row[8];
    char columns[8];
    for(int i=0;i<8;i++){
        columns[i]='a'+i;
    }
    while(t--){
        string s;
        cin>>s;
        char ss=s[0];
        int  n=s[1]-48;
        //cout<<ss<<" "<<n;

        for(int i=0;i<8;i++){
            if(i+1==n) continue;
            cout<<ss<<i+1<<endl;
        }

        for(int i=0;i<8;i++){
            if(columns[i]!=ss){
                cout<<columns[i]<<n<<endl;
            }
        }
    }
}