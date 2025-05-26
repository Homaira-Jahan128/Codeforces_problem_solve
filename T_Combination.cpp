#include <bits/stdc++.h>
using namespace std;
#define ll long long int

unordered_map<string, ll> memo;

ll nCr(ll n, ll r) {
    if (r == 0 || n == r) {
        return 1;
    }
    string key = to_string(n) + "," + to_string(r);
    if (memo.find(key) != memo.end()) {
        return memo[key];
    }
    memo[key] = nCr(n - 1, r - 1) + nCr(n - 1, r);
    return memo[key];
}

int main() {
    ll N, R;
    cin >> N >> R;
    cout << nCr(N, R) << endl;
    return 0;
}
