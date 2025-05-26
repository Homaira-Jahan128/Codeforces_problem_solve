#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int x,y,z;
        int ans=0;

        for(int j=1;j<n-1;j++){
            y=j;
            for(int i=0;i<y;i++){
                if(a[i]<a[j]){
                    x=i;
                    ans++;
                    break;
                }
            }
            for(int i=y;i<n;i++){
                if(a[i]<a[j]){
                    z=i;
                    ans++;
                    break;
                }
            }
            if(ans==2){
               break;
            }
            else ans=0;
        }
        if(ans==2) cout<<"YES\n"<<x+1<<" "<<y+1<<" "<<z+1<<endl;
        else cout<<"NO\n";
    }
    return 0;
}