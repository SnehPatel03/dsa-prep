// find missing number from 1 to n
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int find_missing_no(vector<int> a, int n)
{
    int ans;
    int sum = (n * (n + 1)) / 2;
    int sumOfarr = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sumOfarr += a[i];
    }
    ans = sum - sumOfarr;
    return ans;
    // TC : O(n) and SL : O(1)
}

int find_missing_no_XOR(vector<int> a, int n)
{
    int xor1= 1;
    int xor2=1;
    for (int i = 0; i < a.size(); i++)
    {
        xor1 = xor1 ^ a[i];
        xor2 = xor2 ^ (i + 1);
    }
    xor2 = xor2 ^ n;    
    int ans = xor1 ^ xor2;
    return ans;
}
int main()
{   
    int n;
    cin >> n;
    vector<int> arr(n-1);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int missingNo = find_missing_no(arr, n);
    // int missingNo = find_missing_no_XOR(arr, n);
    // cout << missingNo;
}
