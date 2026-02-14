#include <iostream>
#include <algorithm>
using namespace std;

// int getPartIndex(int a[],int low,int high){
//     int pivot = a[low];
//     int i = low;
//     int j = high;
//     while (i<j)
//     {
//         while(a[i]<=pivot && i<=high-1){
//             i++;
//         }
//         while(a[j]>pivot && j>=low){
//             j--;
//         }
//         if (i < j){
//             swap(a[i],a[j]); 
//         }
//     }
//     swap(a[low],a[j]);
//     return j;
    
// }

// void quickSort(int a[], int low,int high)
// {
//    if (low < high){
//     int partisionIndex = getPartIndex(a,low,high);
//     quickSort(a,low,partisionIndex-1);
//     quickSort(a,partisionIndex+1,high);
//    } 
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i <= n - 1; i++)
//     {
//         cin >> a[i];
//     }
//     quickSort(a,0,n-1);
//     for (int i = 0; i <= n - 1; i++)
//     {
//         cout << a[i] << " ";
//     }
// }


int getPartIndex(int a[],int low,int high){
    int pivot = a[low];
    int i = low;
    int j = high;
    while (i<j)
    {
        while(a[i]>=pivot && i<=high-1){
            i++;
        }
        while(a[j]<pivot && j>=low){
            j--;
        }
        if (i < j){
            swap(a[i],a[j]); 
        }
    }
    swap(a[low],a[j]);
    return j;
    
}

void quickSortDes(int a[], int low,int high)
{
   if (low < high){
    int partisionIndex = getPartIndex(a,low,high);
    quickSortDes(a,low,partisionIndex-1);
    quickSortDes(a,partisionIndex+1,high);
   } 
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> a[i];
    }
    quickSortDes(a,0,n-1);
    for (int i = 0; i <= n - 1; i++)
    {
        cout << a[i] << " ";
    }
}
