#include<bits/stdc++.h>
using namespace std;

void repeat(int n){
    if(n<10) {
        cout<<n<<" ";
        return;
    }
    repeat(n/10);
    cout<<n%10<<" ";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        repeat(n);
        cout<<endl;
    }
} 