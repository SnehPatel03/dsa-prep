#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter Number of Elements for arr :" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
        cout << endl;
    }
    bubbleSort(arr, n);
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}

//ts big oh of n^2
// but in best case it can be optimized in bigO of n order a