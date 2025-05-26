#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        int y=0,max=0;
        for(int i=n-1;i>=0;i--){
            int x;
            cin>>x;
            a[i]=x^y;
            y=a[i];
            if(y>max){
                max=y;
            }
        }
        cout<<max<<endl;
    }
}