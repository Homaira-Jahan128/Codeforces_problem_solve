#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        string sn,sm;
        cin>>sn>>sm;
        int zn=0,on=0,om=0,zm=0;
        for(int i=0;i<n;i++){
            if(sn[i]=='0') zn++;
            else on++;
            if(sm[i]=='0') zm++;
            else om++;
        }
        //if(n==m)
    }
    return 0;  
} 