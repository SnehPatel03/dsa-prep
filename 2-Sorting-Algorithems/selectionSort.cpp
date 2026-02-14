#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
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
        cout << " ";
    }
    selectionSort(arr, n);
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}
// ts = bigO of n^2 in all cases