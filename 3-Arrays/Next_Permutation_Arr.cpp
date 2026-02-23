#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> nextPerm(vector<int> a, int n)
{
    int index = -1;
    for (int i = n - 2; i > 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(a.begin(), a.end());
        return a;
    }

    for (int i = n - 1; i > index; i--)
    {
        if (a[i] > index)
        {
            swap(a[index], a[i]);
            break;
        }
    }
    reverse(a.begin() + index + 1, a.end());
    return a;
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
    vector<int> ans = nextPerm(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}