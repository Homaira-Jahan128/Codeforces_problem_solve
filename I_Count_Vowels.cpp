#include<bits/stdc++.h>
using namespace std;
int v=0;

int getVowel(int x,string s){
    if(x == 0) return 1; 
    char ch = s[x];
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
         ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            v++;
        }
    getVowel(x-1,s);
    return v;
}


int main(){
    string s;
    getline(cin,s);
    int size=s.length()-1;
    cout<<getVowel(size,s)<<endl;
}