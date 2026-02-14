#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
// #1 Largest Element in the Array
int largestElem(vector<int> a, int n)
{
    int largest = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    return largest;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    int largest = largestElem(arr, n);
    cout << "Largest is " << largest;
}