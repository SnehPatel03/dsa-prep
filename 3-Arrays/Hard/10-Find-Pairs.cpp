// find the pairs that has i < j and a[i] < a[j]*2 here we will use the same approach as count inversion but here we will check for a[i] > 2*a[j] and also we need to sort the array in merge step because we need to find the pairs in sorted array.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findPairs(vector<int> &a, int low, int mid, int high)
{
    int right = mid + 1;
    int cnt = 0;
    for (int i = low; i <= mid; i++)
    {
        while (right <= high && a[i] > 2 * a[right])
        {
            right++;
        }
        cnt += right - (mid + 1);
    }
    return cnt;
}

void merge(vector<int> &a, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    while (left <= mid && right <= high)
    {
        if (a[left] < a[right])
        {
            temp.push_back(a[left]);
            left++;
        }
        else
        {
            temp.push_back(a[right]);
            right++;
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
    cnt += findPairs(a, low, mid, high);
    merge(a, low, mid, high);
    return cnt;
}


int countPairs(vector<int> &a, int n)
{
    return mergeSort(a, 0, n - 1);
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ansCount = countPairs(a, n);
    cout << ansCount;
}
// tc is O(2 nlong) 
// sc is O(1)