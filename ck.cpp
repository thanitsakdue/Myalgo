#include <iostream>
using namespace std;

int memo[100][100] = {0};

int tu(int n, int k) {
    if (k == 0 || n == k) {
        return 1;
    } else if (n == 0) {
        return 0;
    } else if (memo[n][k] != 0) {
        return memo[n][k];
    } else {
        memo[n][k] = tu(n - 1, k - 1) + tu(n - 1, k);
        return memo[n][k];
    }
}

int main() {
    cout << tu(9, 5);
    return 0;
}
