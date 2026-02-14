#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(int a[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && a[j] < a[j - 1])
        {
            int temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
            j--;
        }
    } 
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
    insertionSort(arr, n);
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}
// ts : Best Case O(n) and Worst and Avg Case is O(n^2)