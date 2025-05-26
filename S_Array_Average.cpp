#include <bits/stdc++.h>
using namespace std;

double calculateAverage(const vector<int>& arr, int n) {
    if (n==0) {
        return 0;
    }
    return (arr[n-1] + calculateAverage(arr,n-1)*(n-1))/ n;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    double average = calculateAverage(A, N);
    cout <<fixed;
    cout.precision(6);
    cout << average <<endl;
    
    return 0;
}
