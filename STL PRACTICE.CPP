#include <bits/stdc++.h> 
using namespace std; 
  
int main(){
    map<string, int> m;
    m["luba"]=1;
    m["tuba"]=2;
    m["saba"]=1;

    for(auto it :m){
        cout<<"key:"<<it.first<< ", Value: " << it.second << endl;
    }
    return 0;
}
