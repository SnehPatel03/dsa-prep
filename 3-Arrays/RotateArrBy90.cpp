#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> rotateMatrixBrute(vector<vector<int>> &a, int n, int m)
{
    // brute :
    // limitation is this is resulted as another matcrix for ans so sc will increse so optimise it we need the in-place solution of the problem.
    vector<vector<int>> ans(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans[j][n - i - 1] = a[i][j];
        }
    }
    return ans;
}
vector<vector<int>> rotateMatrixOptimal(vector<vector<int>> &a, int n, int m)
{
    // optimal:
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < m; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(a[i].begin(), a[i].end());
    }
    return a;
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

    // vector<vector<int>> ans = rotateMatrixBrute(a, n, m);
    vector<vector<int>> ans = rotateMatrixOptimal(a, n, m);

    cout << "<== Answer is below ==> " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}