//  Leaders : The element must called the Leader if all the right elements of that element is larger that that particular element.
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> find_leaders(vector<int> &a, int n)
{
    // See in the brute force there is easy way that we have a first loop that travers the whole arr and , and a flag that is TRUE by default and in second loop start from i to n that will see if any elem is max the a[i] then flag will marked with FALSE so if flag  is true then it will stored in ans array.

    // here we talk abt the optimal solution.
    int maxi = INT_MIN;
    vector<int> ans;
    for (int i = n - 1; i >=0; i--)
    {
        if (a[i] > maxi)
        {
            maxi= a[i];
            ans.push_back(a[i]); 
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
    vector<int> ans = find_leaders(a, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}