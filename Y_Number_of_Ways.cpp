#include <iostream>
using namespace std;

int countWays(int start, int end) {
    if (start > end) {
        return 0;
    }
    if (start == end) {
        return 1;
    }
    return countWays(start + 1, end) + countWays(start + 2, end) + countWays(start + 3, end);
}

int main() {
    int start, end;
    cin >> start >> end;
    cout << countWays(start, end) << endl;
    return 0;
}
