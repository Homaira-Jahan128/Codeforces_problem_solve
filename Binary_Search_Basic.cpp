#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& vec, int f){
    int low=0, high=vec.size()-1,mid;
    while(low!=high){
        mid=low+(high-low)/2;
        if(vec[mid]>=f){
            high=mid;
        }
        else{
            low=mid;
        }
    }

    return low;
}

int main(){
    int n;
    cin>>n;
    array
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int f;
    cin>>f;
    sort(v.begin(),v.end());
    cout<<solve(v,f);
    return 0;
}