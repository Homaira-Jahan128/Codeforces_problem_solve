#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> allsubsets;

void generate(vector<int> &subset, int i, vector<int> &num){
    if(i==num.size()){
        allsubsets.push_back(subset);
        return;
    }
    generate(subset, i+1, num);
    subset.push_back(num[i]);
    generate(subset, i+1, num);
    subset.pop_back();
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> empty;
    generate(empty, 0, nums);
    for(auto  subset : allsubsets){
        for(auto ele :subset){
            cout<< ele << " ";
        }
        cout<<endl;
    }
    return 0;  
} 