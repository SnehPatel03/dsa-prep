#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
void leftrorateArray(vector<int> a, int k){
    vector<int> temp(a.size());
    int n = a.size();
    k = k % n;
    for (int i = 0; i < k; i++)
    {
        temp[i] = a[i];
    }
    for (int i = k; i < n; i++)
    {
        a[i - k] = a[i];
    }
    int j = 0;
    for (int i = n - k; i < n; i++)
    {
        a[i] = temp[j];
        j++;
    }
    for(int i=0;i < n;i++){
        cout << a[i] << " " ;
    }
    // for this tc : O()
    // for this sc : O(k)
} 
int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    leftrorateArray(arr, k);
}