#include<bits/stdc++.h>
using namespace std;

// int generateCode(int n, int x){
//     int z=0;
//     if(z>n) return;
//     for(int i=x;i>=0;i--){
//         cout << ((n>>i) & 1);
//     }
//     generateCode(z+1,x); ,
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int x=(int)log2(n)+1;
    cout<<x;
    return 0;
} 