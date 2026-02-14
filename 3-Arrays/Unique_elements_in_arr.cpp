// Uniques elements arr from sorted arr {a size of unique elem arr}
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int uniqueElemArrLength(vector<int> a)
{
    int i = 0;
    for (int j = 1; j < a.size(); j++)
    {
        if (a[i] != a[j])
        {
            a[i + 1] = a[j];
            i++;
        }
    }
    return i+1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int unique_arr_len = uniqueElemArrLength(arr);
    cout << unique_arr_len;
}