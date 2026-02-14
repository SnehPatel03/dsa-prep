#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> unionArray(vector<int> a, vector<int> b, int n1, int n2)
{
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {

            if (ans.size() == 0 || ans.back() != a[i])
            {
                ans.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (ans.size() == 0 || ans.back() != b[j])
            {
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (ans.size() == 0 || ans.back() != a[i])
        {
            ans.push_back(a[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (ans.size() == 0 || ans.back() != b[j])
        {
            ans.push_back(b[j]);
        }
        j++;
    }
    return ans;
}

int main()
{
    int n1, n2;
    cin >> n1;
    cin >> n2;
    vector<int> a(n1);
    vector<int> b(n2);
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    vector<int> unionArr = unionArray(a, b, n1, n2);
    for (int i = 0; i < unionArr.size(); i++)
    {
        cout << unionArr[i]<< " ";
    }
}