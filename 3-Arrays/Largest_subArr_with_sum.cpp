#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int longestSubArrWithSumk(vector<int> a, int n, int k)
{
    int maxLen = 0;
    int sum = 0;
    map<int, int> preMap;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        int rem = sum - k;
        if (preMap.find(rem) != preMap.end())
        {
            int len = i - preMap[rem];
            maxLen = max(maxLen, len);
        }

        if (preMap.find(sum) == preMap.end())
        {
            preMap[sum] = i;
        }
    }
    return maxLen;
}

int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> arr(n);
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    int largestSubArrLen = longestSubArrWithSumk(arr, n, k);
    cout << largestSubArrLen;
}