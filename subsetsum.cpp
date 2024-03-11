#include <iostream>

using namespace std;

void printSubset(int nums[], bool dp[][1001], int i, int j) { //i n  j k
    if (i == 0 || j == 0) {
        return;
    }

    if (dp[i][j] ) {
        printSubset(nums, dp, i - 1, j - nums[i - 1]);
        cout << nums[i - 1] << " ";
    } else {
        printSubset(nums, dp, i - 1, j);
    }
}
void printDPTable(bool dp[][1001], int n, int targetSum) {
    cout << "DP Table:" << endl;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= targetSum; ++j) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}
bool isSubsetSum(int nums[], int n, int targetSum) {
    // Create a 2D table to store the subset sum information
    bool dp[101][1001] = {false};

    // Initialize the first column as true, as we can always form a subset with sum 0
    for (int i = 0; i <= n; ++i) {
        dp[i][0] = true;
    }

    // Build the DP table
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= targetSum; ++j) {
            if (nums[i - 1] > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
            }
        }
    }
     printDPTable(dp, n, targetSum);

    // If the target sum is achievable, print the subset
    if (dp[n][targetSum]) {
        printSubset(nums, dp, n, targetSum);
        cout << endl;
        return true;
    } else {
        return false;
    }
}

int main() {
    int nums[] = {3, 4, 5, 2};
    int targetSum = 6;
    int n = sizeof(nums) / sizeof(nums[0]);

    if (isSubsetSum(nums, n, targetSum)) {
        cout << "There exists a subset with sum " << targetSum << endl;
    } else {
        cout << "No subset with sum " << targetSum << " exists" << endl;
    }

    return 0;
}

