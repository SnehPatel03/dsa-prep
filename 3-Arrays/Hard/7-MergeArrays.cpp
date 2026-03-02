// Merge to sorted arrs without any extra space.
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
// given arr must be in sorted order :  
void mergeArr(int n, int m, vector<int> a1, vector<int> a2)
{
    int left = n - 1;
    int right = 0;
    while (left >= 0 & right < m)
    {
        if (a2[right] < a1[left])
        {
            swap(a2[right], a1[left]);
            left--;
            right++;
        }
        else
        {
            break;
        }
    }
    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());

    for (int i = 0; i < n; i++)
    {
        cout << a1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        cout << a2[i] << " ";
    }
}// tc is o(min(n,m)) +  nlogn + mlogm and sc is O(1)

void swapElems(vector<int> &a1, vector<int> &a2, int ind1, int ind2)
{
    if ((a1[ind1] > a2[ind2]))
    {
        swap(a1[ind1], a2[ind2]);
    }
}

void mergeArrByGapMethod(int n, int m, vector<int> &a1, vector<int> &a2)
{
    int len = n + m;
    int gap = (len / 2) + (len % 2);
    while (gap > 0)
    {
        int left = 0;
        int right = left + gap;
        while (right < len)
        {
            // left in on arr1 and right pointer in on arr2
            if (left < n && right >= n)
            {
                swapElems(a1, a2, left, right - n);
            }
            // this is case where both pointer in arr2
            else if (left >= n)
            {
                swapElems(a2, a2, left - n, right - n);
            }
            // this is case where both pointer in arr1
            else
            {
                swapElems(a1, a1, left, right);
            }
            left++;
            right++;
        }

        if (gap == 1)
            break;
        gap = gap / 2 + gap % 2;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        cout << a2[i] << " ";
    }
}
// this is also a same optimal way to solve but in different manner SC and TC are same as past one,
// tc is o(n + m) +  nlogn + mlogm and sc is O(1)

int main()
{
    int n;
    int m;
    cin >> n;
    cin >> m;

    vector<int> a1(n), a2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a2[i];
    }


    // mergeArr(n, m, a1, a2);
    mergeArrByGapMethod(n, m, a1, a2);
}