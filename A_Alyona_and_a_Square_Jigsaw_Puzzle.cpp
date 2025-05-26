#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=1,x=a[0],m=3,z=0;
        for(int i=1;i<n;i++){
            x+=a[i];
            //cout<<x<<endl;
            while(true){
                if(x>(m*m)) break;
                z++;
                m+=2;
            }
            if(z>0){
                count++;
                z=0;
            }
        }
       cout<<count<<endl;
    }
}