#include <bits/stdc++.h>
using namespace std;

// Returns the count of ways we can
// sum coins[0...n-1] coins to get sum "sum"
int count(int coins[], int n, int sum)
{
	if (sum == 0)
		return 1;
	if (sum < 0)
		return 0;

	if (n <= 0)
		return 0;
	return count(coins, n, sum - coins[n - 1])
		+ count(coins, n - 1, sum);
}
int main()
{
	int i, j;
	int coins[100];
	int n = sizeof(coins) / sizeof(coins[0]);
	int sum = 5;
     cout<<"Enter the no of array element";
    cin>>n;
    for(i=1;i<n;i++)
    {

        cin>>coins[i];
    }

	cout << " " << count(coins, n, sum);

	return 0;
}