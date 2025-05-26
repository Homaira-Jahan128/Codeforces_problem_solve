#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],pl=0,mi=0,tl=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) pl++;
            else mi++;
        }
        if(mi<pl){
            if(mi%2==0) cout<<"0\n";
            else cout<<"1\n";
        }
        else if((n/2)%2==0){
            cout<<abs(mi-n/2)<<endl;
        }
        else cout<<abs(mi-n/2+1)<<endl;
    }

    return 0;  
}