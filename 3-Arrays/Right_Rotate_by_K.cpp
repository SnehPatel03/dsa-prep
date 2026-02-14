#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
void rorateArray(vector<int> a, int k)
{
    vector<int> temp(a.size());
    for (int i = 0; i < a.size(); i++)
    {
        temp[(i + k) % a.size()] = a[i];
    }
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
}
int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rorateArray(arr, k);
}