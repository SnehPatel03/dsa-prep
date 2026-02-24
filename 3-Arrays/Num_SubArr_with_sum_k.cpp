#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int numOfSubArrWithSumK(vector<int> a, int n, int k)
{
    map<int, int> mapp;
    mapp[0] = 1;
    int presum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        presum += a[i];
        int rem = presum - k;
        count += mapp[rem];
        mapp[presum] = mapp[presum] + 1;
    }
    return count;
}

int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    int ans;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ans = numOfSubArrWithSumK(a, n, k);
    cout << ans;
}