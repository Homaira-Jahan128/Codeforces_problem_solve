#include<bits/stdc++.h>
using namespace std;

#define nl    cout<<endl
#define yes   cout<<"YES"
#define no   cout<<"NO"

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans=1;
        cin>>n;
        set<int> st;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            st.insert(x);
            if(i!=0){
                auto it=st.find(x-1);
                auto it2=st.find(x+1);
                if(it==st.end() && it2==st.end()) ans=0;
            }
        }
        if(ans) yes;
        else no;
        nl;
    }
}