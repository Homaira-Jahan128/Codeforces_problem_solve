#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int cntL=0,cntO=0;
    for(int i=0;i<n;i++){
        if(s[i]=='L') cntL++;
        else cntO++;
    }

    if((s[0]=='L' && cntL==2 && s[n-1]=='L') || (s[0]=='O' && cntO==2 && s[n-1]=='O')){
        cout<<"-1";
    }
    else if(n==4){
        if(s=="LOLO" || s== "OLOL"){
            cout<<"-1";
        }
        else{
            cout<<"2";
        }
    }
    
    else{
        if(cntL==2){
            if(s[0]=='L') cout<<n-1;
            else cout<<"1";
        }
        else if(cntO==2){
            if(s[0]=='O') cout<<n-1;
            else cout<<"1";
        }
        else cout<<n-1;
    }
    return 0;
}