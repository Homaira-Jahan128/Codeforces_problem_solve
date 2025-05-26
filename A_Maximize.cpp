#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,x;
    cin>>t;
    while(t--){
        cin>>x;
        int max=0,a,y=0;
        for(int i = x-1; i > 0; i--){
            a=__gcd(x,i)+i;
            if(a>max){
                max=a;
                y=i;
            }
        }
        cout<<y<<endl;
    }
} 