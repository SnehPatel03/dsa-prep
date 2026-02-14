#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void leftRotateBy1(vector<int>& arr)
{
    int temp = arr[0];
    int n = arr.size();
      if (n == 0) return;  
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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
    leftRotateBy1(arr);
}