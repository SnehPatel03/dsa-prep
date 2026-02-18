#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;
vector<int> sumof2Elem(vector<int> a, int n, int sum)
{
    map<int, int> mapp;
    for (int i = 0; i < n; i++)
    {
        int rem = sum - a[i];
        if (mapp.find(rem) != mapp.end())
        {
            return { i, mapp[rem] }; // or "YES There exist 2 elems that has SUM"
        }
        mapp[a[i]] = i;
    }
    return {-1 , -1}; //  return "NO there no exist that 2 elems that have Sum of SUM"
}

int main()
{
    int n, sum;
    cin >> n;
    cin >> sum;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> indexes = sumof2Elem(a, n, sum);
    for (int i = 0; i < indexes.size(); i++)
    {
        cout << "at position : " << indexes[i] << endl;
    }
}
// TC  : ordered Map then O(n log n) + O(n)
// SC  : O(n)

// if without map then we can ans yes and no optimaly by 2 pointer greedy approach in that point 2 pointer one at last and front till they cross each other if first sum is k then return and if it is less then needed so add ++ to left pointer anf first sum is more then we need to reduse it so  -- decrease the pointer of last (right pointer) thats it.