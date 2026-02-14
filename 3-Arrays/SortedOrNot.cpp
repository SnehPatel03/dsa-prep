// check the array is sorted or not
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool isSorted(vector<int> a)
{
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i - 1] > a[i])
        {
            return false;
        }
    }
    return true;
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
    bool isSrd = isSorted(arr);
    cout << "isSrd is " << isSrd;
}