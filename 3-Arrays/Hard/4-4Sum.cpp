// find 4 elems from array that sum resulted into 0;
// no duplicate elems and no duplicate ;
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>

using namespace std;

vector<vector<int>> threeSumBetter(int n, vector<int> a, int target)
{
    // here 1st we are looking for O(n^3) solution there exist most naive solution in that all exist triplates are found by 4 loops and check if the sum is 0 or not that end up taking the O(n^4) that is very large and unacceptable So we are looking for better code ->

    set<vector<int>> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            set<int> hashset;
            for (int k = j + 1; k < n; k++)
            {
                long long sum = a[i] + a[j];
                sum += a[k];
                int forth = target - sum;
                if (hashset.find(forth) != hashset.end())
                {
                    vector<int> temp = {a[i], a[j], a[k], forth};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(a[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
// this will end up taking the O(n2 + logn(for sorted set) / O(1)if unsored set)
// SC: O(n^2)

// Now we are looking for optimal solution :
vector<vector<int>> threeSumOptimal(int n, vector<int> a, int target)
{

    vector<vector<int>> ans;
    sort(a.begin(), a.end());   

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (j > i+1 && a[j] == a[j - 1])
                continue;
            int k = j + 1;
            int l = n - 1;
            while (k < l)
            {
                int sum = a[i] + a[j];
                sum += a[k];
                sum += a[l];
                if (sum > target)
                {
                    l--;
                }
                else if (sum < target)
                {
                    k++;
                }
                else
                {
                    vector<int> temp = {a[i], a[j], a[k], a[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while (k < l && a[k] == a[k - 1])
                    {
                        k++;
                    }
                    while (k < l && a[l] == a[l + 1])
                    {
                        l--;
                    }
                }
            }
        }
    }
    return ans;
}

int main()
{
    int n, target;
    cin >> n;
    cin >> target;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // vector<vector<int>> ans = threeSumBetter(n, a, target);
    vector<vector<int>> ans = threeSumOptimal(n, a,target);
    for (auto list : ans)
    {
        for (auto val : list)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}