#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Type 1 : where we need to return element on nth row and mth col on pascal triangle.
// int pascaltri(int row, int col)
// {   // rowCcol
//     row = row - 1;
//     col = col - 1;
//     // NcR of rows amd columns
//     int res = 1;
//     for (int i = 0; i < col; i++)
//     {
//         res = res * (row - i);
//         res = res / (i + 1);
//     }
//     return res;
// }

// int main()
// {
//     int col;
//     int row;
//     cin >> row;
//     cin >> col;
//     int ans = pascaltri(row, col);
//     cout << ans;
// }

// Type 2 : where find any nth row from pascal triangle
//  void pascaltri(int n){
//      int ans  = 1;
//      cout << ans << ", ";
//      for(int i =1;i<n;i++){
//          ans = ans * (n-i);
//          ans = ans / (i);
//          cout << ans << ", ";
//      }

// }

// int main()
// {
//     int n;
//     cin >> n;
//     pascaltri(n);
// }

// Type 3: Print a pascal trinagle till given nth row.
vector<int> generateRow(int n)
{
    int ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for (int i = 1; i < n; i++)
    {
        ans = ans * (n - i);
        ans = ans / i;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int N)
{
    vector<vector<int>> ans;
    for (int i = 1; i <=N; i++)
    {
        ans.push_back(generateRow(i));
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> ans;
    ans = pascalTriangle(n);
    for(auto row:ans){
        for(auto val : row){
            cout << val << " "; 
        }
        cout << endl;
    }

}