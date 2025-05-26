#include<bits/stdc++.h>
using namespace std;
const int modNumber= 1e9+7;

long long fact(long long n){
    if(n == 0) return 1;
    long long ans= (n * fact(n-1));
    return ans;
}

int main(){
    long long int t,n,a,b;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;

        if(a>=b){
            cout<<a*n<<endl;
        }
        else{
            if(n>=(b-a)){
                long long int amt=0,n1=b-a;
                amt=b*n1-fact(n1-1);
                cout<<amt+(n-n1)*a<<endl;
            }
            else{
                int amt=0;
                amt=fact(b);
                cout<<amt<<endl;
            }
        }
    }
    
}