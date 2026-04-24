#include <iostream>
#include <algorithm>
#include <vector>
// find the count of inversion pairs in an array where a pair (a[i], a[j]) is called an inversion if i < j and a[i] > a[j]
using namespace std;
int ms(vector<int> &a, int low, int high, int mid)
{
    int cnt = 0;
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (a[left] > a[right])
        {
            cnt += (mid - left + 1);
            temp.push_back(a[right]);
            right++;
        }
        else
        {
            temp.push_back(a[left]);
            left++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(a[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(a[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = temp[i - low];
    }
    return cnt;
}

int mergeSort(vector<int> &a, int low, int high)
{
    int cnt = 0;
    if (low >= high)
    {
        return cnt;
    }
    int mid = (low + high) / 2;
    cnt += mergeSort(a, low, mid);
    cnt += mergeSort(a, mid + 1, high);
    cnt += ms(a, low, high, mid);
    return cnt;
}

int Inversion(vector<int> &a, int n)
{
    int cnt = mergeSort(a, 0, n - 1);
    return cnt;
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
    int cntofPairs = Inversion(arr, n);
    cout << cntofPairs;
}
