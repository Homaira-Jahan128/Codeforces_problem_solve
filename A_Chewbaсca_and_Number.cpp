#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    int arr[20],s=0;
    for(int i=0;a!=0;i++){
        if(a%10 > 5){
            arr[i]=9-a%10;
        }
        else{
            arr[i]=a%10;
        }
        a=a/10;
        s++;
    }

    for(int i=s;i>=0;i--){
        cout<<arr[i];
    }

    return 0;
}