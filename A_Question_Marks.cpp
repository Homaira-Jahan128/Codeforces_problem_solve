#include<bits/stdc++.h>
using namespace std;
#define nl cout<<endl;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string st;
        cin>>st;
        int cntA=0,cntB=0,cntC=0,cntD=0;
        
        for(int i=0;i<st.length();i++){
            char s = st[i];
            if(s =='A' && cntA < n) cntA++;
            
            if(s =='B' && cntB < n) cntB++;
        
            if(s =='C' && cntC < n) cntC++;

            if(s =='D' && cntD < n) cntD++;
        }
        cout<<cntA+cntB+cntC+cntD<<endl;
    }
}