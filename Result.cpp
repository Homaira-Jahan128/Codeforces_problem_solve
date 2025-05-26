#include<bits/stdc++.h>
using namespace std;

#define nl    cout<<endl
#define yes   cout<<"YES"
#define no   cout<<"NO"

int main(){
   
      vector< pair<float,int> > p;
    //    for(int i=0;i<46;i++){
    //         float r;
    //         int roll;
    //         cin>>roll>>r;
    //         mp[r]=roll;
    //    }

    for(int i=0;i<44;i++){
        float cg;
        int roll;
        cin >> roll >> cg;
       p.push_back({cg, roll});
    }
sort(p.rbegin(), p.rend());
int i=1;
for(int i=0; i< 44; i++){
    cout<<" Merit :" << i+1<< " " <<"CG: "<< p[i].first <<"  " <<  " Roll: "<< p[i].second<<endl;
    
}


      
   
}