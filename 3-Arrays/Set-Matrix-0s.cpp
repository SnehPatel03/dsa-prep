// if any element in matrix is 0 then its row and column's all elements must be zero.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// kind of brute or better solution :
// at the end in the brute you have the tc of O(2 * n * m ) and SC is O(m + n)
 vector<vector<int>> zeroMatrixBrute(vector<vector<int>> a, int n,int m)
    {
        int col[m];
        int row[n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 0)
                {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (row[i] == 1 || col[j] == 1)
                {
                    a[i][j] = 0;
                }
            }
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

    vector<vector<int>> ans = zeroMatrixBrute(a , n , m);

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