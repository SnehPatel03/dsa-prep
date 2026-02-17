#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int maxCons1(vector<int> a, int n)
{
    int maxi = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cnt = cnt + 1;
            maxi = max(maxi, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    return maxi;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    int max1s = maxCons1(arr, n);
    cout << max1s;
}