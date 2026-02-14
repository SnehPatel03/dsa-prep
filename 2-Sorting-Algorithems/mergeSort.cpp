#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int ms(int a[], int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
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

void mergeSort(int a[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (high + low )/ 2;
    mergeSort(a, low, mid);
    mergeSort(a, mid + 1, high);
    ms(a, low, mid, high);

}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}
