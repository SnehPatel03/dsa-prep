#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

    int maxProduct(vector<int> a, int n)
    {
        int prefix = 1;
        int sufix = 1;
        int maxi = INT_MIN;
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
    int ans = maxProduct(a, n);
    cout << ans;
}