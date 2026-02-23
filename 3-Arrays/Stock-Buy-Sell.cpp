//  the problem is known as Buy sell problem of stock in that we need to analyze the whole array , all elems of array represents the price of elem at a day of index that is at now and we need to result that how max profit can we make by selling a stock.
// this is DP problem.
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int maximumProfit(vector<int> a, int n)
{
    int buy_price = a[0];
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        int cost = a[i] - buy_price; // cost or profit at i'th location
        profit = max(profit,cost);
        buy_price = min(buy_price,a[i]); // the logic of make buying price low as possible so that the maximum profot can be made.
    }
    return profit;
}
// TC: O(n) and SC :O(1)
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    int maxProfit = maximumProfit(arr, n);
    cout << maxProfit << " ";
}