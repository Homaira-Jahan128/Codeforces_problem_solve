#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    while(t--){
        string st1="codeforces";
        string st2;
        //cin>>st2;
        cout<<st1;
        int cnt=0;
        for(int i=0;i<10;i++){
            if(st1[i]!=st2[i]) cnt++;
        }
        cout<<cnt<<"\n";
    }

    return 0;  
}