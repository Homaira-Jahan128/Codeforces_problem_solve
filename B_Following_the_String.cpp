#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[200001]={0};
        while(n--){
            cin>>x;
            cout<<char('a'+arr[x]);
            arr[x]++;
    }
   cout<<endl;
    }

    return 0;  
}