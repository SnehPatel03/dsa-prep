// find 3 elems from array that sum resulted into 0;
// no duplicate elems and no duplicate triplates;
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>

using namespace std;

vector<vector<int>> threeSum(int n, vector<int> a)
{
    // here 1st we are looking for O(n^2) solution there exist most naive solution in that all exist triplates are found by 3 loops and check if the sum is 0 or not that end up taking the O(n^3) that is very large and unacceptable So we are looking for better code ->

    set<vector<int>> triplates;
    for (int i = 0; i < n; i++)
    {
        set<int> hashset;
        for (int j = i + 1; j < n; j++)
        {
            int third = -(a[i] + a[j]);
            if (hashset.find(third) != hashset.end())
            {
                vector<int> temp = {a[i], a[j], third};
                sort(temp.begin(), temp.end());
                triplates.insert(temp);
            }
            hashset.insert(a[j]);
        }
    }
    vector<vector<int>> ans(triplates.begin(), triplates.end());
    return ans;
}
// this will end up taking the O(n2 + logn(for sorted set) / O(1)if unsored set)
// SC: O(n^2)

// Now we are looking for optimal solution :
vector<vector<int>> threeSumOptimal(int n, vector<int> a)
{
    vector<vector<int>> ans;
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            continue;
        }
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = a[i] + a[j] + a[k];
            if (sum > 0)
            {
                k--;
            }
            else if (sum < 0)
            {
                j++;
            }
            else
            {
                vector<int> temp = {a[i], a[j], a[k]};
                ans.push_back(temp);
                j++;
                k--;
                while (j < k && a[k] == a[k + 1])
                {
                    k--;
                }
                while (j < k && a[j] == a[j - 1])
                {
                    j++;
                }
            }
        }
    }
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

    // vector<vector<int>> ans = threeSum(n, a);
    vector<vector<int>> ans = threeSumOptimal(n, a);
    for (auto list : ans)
    {
        for (auto val : list)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}