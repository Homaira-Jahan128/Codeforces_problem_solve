#include<bits/stdc++.h>
using namespace std;


int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        multiset<long long> bags;
        for(int i=0;i<n;i++){
            long long cdy;
            cin>>cdy;
            bags.insert(cdy);
        }
        long long tl=0;
        for(int i=0;i<k;i++){
            auto last_it=--bags.end();
            long long ct=*last_it;
            tl+=ct;
            bags.erase(last_it);
            bags.insert(ct/2);
        }
        cout<<tl<<endl;
    }
}