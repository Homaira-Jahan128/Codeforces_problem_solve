#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        
        if(y2>=x1 && y2<=x2 || y1>=x1 && y1<=x2)
        cout<<"NO"<<endl;
        else 
        cout<<"YES"<<endl;
    }
}