// merge the overlapping arrays of vector of 2.(startIndex,endIndex)
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;
// this is better solution but this is the base of solution it take TC of : O(nlogn * 2n(see video if confusion)) amd sc:o(n)
vector<vector<int>> mergeOverlaps(vector<vector<int>> a, int n)
{
    sort(a.begin(), a.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        int start = a[i][0];
        int end = a[i][1];
        if (!ans.empty() && end <= ans.back()[1])
        {
            continue;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (a[j][0] <= end)
            {
                end = max(end, a[j][1]);
            }
            else
            {
                break;
            }
        }
        ans.push_back({start, end});
    }
    return ans;
}

vector<vector<int>> mergeOverlapsOptimal(vector<vector<int>> a, int n)
{
    sort(a.begin(), a.end());
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        if (ans.empty() || a[i][0] > ans.back()[1])
        {
            ans.push_back(a[i]);
        }
        else
        {
            // a[i][0](start) <= ans.back()[1] this situation arise 
            ans.back()[1] = max(a[i][1], ans.back()[1]);
        }
    }
    return ans;
}
// Optimal way with O(nlog n) and SC : o(n) to return the answer; 
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(2));
    for (int i = 0.; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }

    // vector<vector<int>> ans = mergeOverlaps(a, n);
    vector<vector<int>> ans = mergeOverlapsOptimal(a, n);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}