// the elem having more than >n/2 occurences in given array
// moore's voting algorithem
// this is the optimal solution for given problem
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int maxOccurence(vector<int> a, int n)
{
    int cnt = 0;
    int elem;
    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            elem = a[i];
        }
        if (a[i] == elem)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
// we fucking dont care with the resulted counter okk!!!
    int cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == elem)
            cnt2++;
    }
        if (cnt2 > n / 2)
        {
            return elem;
        }
        else
        {
            return -1;
        }
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
    int ans = maxOccurence(a, n);
    cout << ans;
}