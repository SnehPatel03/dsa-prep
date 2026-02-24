// print all elements of matrix in the spiral order
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> spiralOrderPrint(vector<vector<int>> a, int n, int m)
{
    int left = 0;
    int right = m - 1;
    int top = 0;
    int bottom = n - 1;

    vector<int> ans;

    while (left <= right && top <= bottom)
    {
        // right
        for (int i = left; i <= right; i++)
        {
            ans.push_back(a[top][i]);
        }
        top++;

        // bottom
        for (int i = top; i <=bottom; i++)
        {
            ans.push_back(a[i][right]);
        }
        right--;

        // left
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(a[bottom][i]);
            }
            bottom--;
        }

        // top
        if (left <= right)
        {
            for (int i = bottom; i >=top; i--)
            {
                ans.push_back(a[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main()
{
    int n;
    int m;
    cin >> n;
    cin >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<int> ans = spiralOrderPrint(a, n, m);

    cout << "<== Answer is below ==> " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}