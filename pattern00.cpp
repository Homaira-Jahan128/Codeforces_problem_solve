#include<bits/stdc++.h>
using namespace std;

#define nl    cout<<endl
#define yes   cout<<"YES"
#define no   cout<<"NO"

int pattern(int n){
    for(int i=0;i<n;i++){

        for(int j=i;j<n-1;j++){
            cout<<" ";
        }

        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        nl;
    }

    for(int i=n-1;i>=0;i--){

        for(int j=i;j<n-1;j++){
            cout<<" ";
        }

        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        nl;
    }
}

int main(){
    
    int n;
    cin>>n;
    pattern(n);

}


