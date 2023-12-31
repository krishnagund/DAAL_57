#include <iostream>
#include <cstring>  
using namespace std;

int countCoinChangeWays(int coins[], int n, int sum) {
    
    int dp[sum + 1];
    memset(dp, 0, sizeof(dp));

   
    dp[0] = 1;

    
    for (int i = 0; i < n; ++i) {
        for (int j = coins[i]; j <= sum; ++j) {
            dp[j] += dp[j - coins[i]];
        }
    }

    return dp[sum];
}

int main() {
    int sum1 = 4;
    int coins1[] = {1, 2, 3};
    int output1 = countCoinChangeWays(coins1, sizeof(coins1) / sizeof(coins1[0]), sum1);
    cout << "Input: sum = " << sum1 << ", coins = {1, 2, 3}, Output: " << output1 << endl;

    int sum2 = 10;
    int coins2[] = {2, 5, 3, 6};
    int output2 = countCoinChangeWays(coins2, sizeof(coins2) / sizeof(coins2[0]), sum2);
    cout << "Input: sum = " << sum2 << ", coins = {2, 5, 3, 6}, Output: " << output2 << endl;

    return 0;
}
