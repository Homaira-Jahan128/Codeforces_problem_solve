#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    // int t,n;
    int n;
    cin>>n;
    vector<int> arr={0,1};
    for(int i=3;i<=15;i++){
        int n =arr.size();
        int new_fibo = arr[n-1] +arr[n-2];
        arr.push_back(new_fibo);
    }
    cout<< arr.back()<<endl;
    return 0;
} 