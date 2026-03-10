#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int maxProdct(vector<int> a, int n)
{
    int prefix = INT_MIN;
    int sufix = INT_MIN;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (prefix == 0)
            prefix = 1;
        if (sufix == 0)
            sufix = 1;
        prefix *= a[i];
        sufix *= a[n - i - 1];
        maxi = max(maxi, max(prefix, sufix));
    }
    return maxi;
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
    int ans = maxProdct(a, n);
    cout << ans;
}