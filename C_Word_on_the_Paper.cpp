#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x=8;
        char st[9];
        while(x--){
            cin>>st;
            for(int i=0;i<8;i++){
                if(st[i]!='.')
                cout<<st[i];
            }
        }
        cout<<"\n";
    }

    return 0;  
}