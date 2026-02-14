// second largest Ele in array 
//  you can also go in. a way of finf largest and then reverse loop and find the first elem that is not eq= to largest 
// But it has 2 passes So Optimal is Below one its one pass solution    
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int secLargest(vector<int> a, int n)
{
    int largest = a[0];
    int slargest = INT_MIN;
    for (int i=0;i < n;i++){
        if(a[i] > largest){
            slargest = largest;
            largest = a[i];
        }
        if(a[i] < largest && a[i] > slargest){
            slargest = a[i];
        }
    }
    return slargest;
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
    int sl = secLargest(arr,n);
    cout << sl;
}