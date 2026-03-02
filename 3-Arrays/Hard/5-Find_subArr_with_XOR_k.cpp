#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;
int findSubWithXORofK(vector<int> a, int n, int k)
{
    int xr = 0;
    map<int,int> mpp;
    int cnt =0;
    mpp[xr]++; // initialize with {0 , 1} on map IMPORTANT
    for (int i = 0; i < n; i++)
    {
        xr = xr ^ a[i];
        int rem = xr^k;
        cnt  = cnt + mpp[rem];
        mpp[xr]++;
    }
    return cnt;
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
    int subArrCnt = findSubWithXORofK(arr, n, k);
    cout << subArrCnt;
}
// TC is O(n) * log n(bcz of map depends on type of map)
// SC is O(n) bcz of map