#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> zAtEnd(vector<int> a, int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            temp.push_back(a[i]);
        }
    }
    int nzlength = temp.size();
    for (int i = 0; i < temp.size(); i++)
    {
        a[i] = temp[i];
    }
    for (int i = nzlength; i < n; i++)
    {
        a[i] = 0;
    }
    return a;
}

vector<int> zAtEndOptimal(vector<int> a, int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j == -1) return a;
    for (int i = j + 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[j], a[i]);
            j++;
        }
    }
    return a;
    // SC :O(1);
    //TC : O(n); worst case condition
    
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
    // vector<int> zerosAtEnd = zAtEnd(arr, n);
    vector<int> zerosAtEnd = zAtEndOptimal(arr, n);
    for (int i = 0; i <= n - 1; i++)
    {
        cout << zerosAtEnd[i] << " ";
    }
}