// find the subarray that have a maximum sum :
// Optimal Solution by kadane's algorithm
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;
// Brute / better : Tc : O(n^2)
int MaxSumSubArr(vector<int> a, int n)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

// Optimal(kadane's Algo);
int MaxSumSubArrByKadane(vector<int> a, int n)
{
    int sum = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > maxi)
        {
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}

vector<int> MaxSumSubArrByKadane_resultsSubArr(vector<int> a, int n)
{
    vector<int> ans;
    int sum = 0;
    int ansStart = -1;
    int ansEnd = -1;
    int startIndex;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            startIndex = i;
        }
        sum += a[i];
        if (sum < 0)
        {
            sum = 0;
        }
        if (sum > maxi)
        {
            ansStart = startIndex;
            ansEnd = i;
            maxi = sum;
        }
    }
    ans.push_back(a[ansStart]);
    ans.push_back(a[ansEnd]);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // int sum = MaxSumSubArr(a, n);
    int sum = MaxSumSubArrByKadane(a, n);
    cout << sum;

    // But when we need a array that has those elems that results the sum then.. approach is slightly chnages
    // vector<int> subarr = MaxSumSubArrByKadane_resultsSubArr(a, n);
    // for (int i = 0; i < subarr.size(); i++)
    // {
        // cout << "index :"<<i << " is" <<" " <<  subarr[i] << endl;
    // }
}
