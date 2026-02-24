// Re-arrange the array in a way of signs alternative indexes.
// there is 2 varity in 1.number of odd and even are same.
// 2.number of odd and even are not so same.
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
// this is the first varity where the number of pos and even are neg in numbers
vector<int> reArrangeArr(vector<int> &a, int n)
{
    int pos = 0;
    int neg = 1;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            ans[pos] = a[i];
            pos += 2;
        }
        else
        {
            ans[neg] = a[i];
            neg += 2;
        }
    }
    return ans;
}

// this is the second varity where the number of pos and neg might not be same
// case is where you need to make sure that solev with brute force till the array of neg and pos are same and after which ever elem left handle that.

vector<int> reArrangeArrVarity2(vector<int> &a, int n)
{
    vector<int> pos;
    vector<int> neg;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            pos.push_back(a[i]);
        }
        else
        {
            neg.push_back(a[i]);
        }
    }
    
    if (pos.size() > neg.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            ans[i * 2] = pos[i];
            ans[(i * 2) + 1] = neg[i];
        }
        int index = neg.size() * 2;
        for (int i = neg.size(); i < n; i++)
        {
            ans[index] = pos[i];
            index++;
        }
    }
    else
    {
        for (int i = 0; i < pos.size(); i++)
        {
            ans[i * 2] = pos[i];
            ans[(i * 2) + 1] = neg[i];
        }
        int index = pos.size() * 2;
        for (int i = pos.size(); i < n; i++)
        {
            ans[index] = neg[i];
            index++;
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

    // vector<int> arrangedArr = reArrangeArr(a, n);
    vector<int> arrangedArr = reArrangeArrVarity2(a, n);
    for (int i = 0; i < arrangedArr.size(); i++)
    {
        cout << arrangedArr[i] << " ";
    }
}