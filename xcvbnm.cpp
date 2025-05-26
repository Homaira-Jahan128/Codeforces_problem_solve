#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    string str[t];
    for(int i=0;i<t;i++)
    getline(cin,str[i]);
    string temp;
    for(int i=0;i<t-1;++i) {
        for (int j=0;j<t-i-1;++j) {
            if (str[j]<str[j + 1]) {
                temp=str[j];
                str[j]=str[j + 1];
                str[j+1]=temp;
            }
        }
    }
    string st;
    int max=0;
    for(int i=0;i<t;i++){
        int count=0;
        for(int j=i-1;j<t;j++){
            if(str[i]==str[j])
            count++;
            else break;
        }
        if(max<=count){
            max=count;
            st=str[i];
        }
     }
    // cout<<st<<" "<<max;
    for(int i = 0; i < t; ++i)
    {
       cout << str[i] << endl;
    }
    return 0;  
}