#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> interSection(vector<int> a, vector<int> b, int n1, int n2)
{
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
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
    vector<int> intersection = interSection(a, b, n1, n2);
    for (int i = 0; i < intersection.size(); i++)
    {
        cout << intersection[i] << " ";
    }
}