#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],count=0;
        for(int i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++){
            int x=0;
            for(int j=i;j<n;j++){
                if(a[i]==a[j]){
                    x++;
                    i=j;
                }
            }
            if(x>2) count+=x/3;
        }
        cout<<count<<endl;
    }

    return 0;  
}
//