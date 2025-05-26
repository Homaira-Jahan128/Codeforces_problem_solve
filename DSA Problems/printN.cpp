#include <bits/stdc++.h>
using namespace std;
int sum = 0, i=1;

int sumOfSeries(int n){
    // code here
    if (n == i){
        cout << sum;
        return 0;
    }
    sum += pow(2, i);
    i++;
    sumOfSeries(i);
}

int main(){
    int n;
    cin >> n;
    sumOfSeries(n);
}