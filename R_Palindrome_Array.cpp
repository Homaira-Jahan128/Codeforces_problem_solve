#include<bits/stdc++.h>
using namespace std;


bool palindromeArry(int n, int a[],int i){
   if(i==n/2+1) return true;
   if(a[n-i] != a[i]) return false;
   palindromeArry(n,a,i+1);
}

int main() {
    int n,i=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<((palindromeArry(n-1,a,i)) ? "YES":"NO");
}
