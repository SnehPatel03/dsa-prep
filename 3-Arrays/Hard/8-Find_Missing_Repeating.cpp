// an array of n with 1 to n numbers in sorted ordr find the missing and repeating number
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
// brute is very clear : for loop and iterate each elem and also check again with another for loop and see is equal with a[i] then increase the cnt if cnt == 2 is repeating and cnt == 0 its missing. endup taking O(n2) and in case of optimal you will go for hashArray thats also endup taking extra sc thats why it also not Optimal app.

vector<int> findMissingRepeating(vector<int> a, int n)
{
    long long sn = (n * (n + 1)) / 2;
    long long sn2 = (n * (n + 1) * (2 * n + 1)) / 6;

    long long s=0 , s2=0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
        s2 += ((long long)a[i] * (long long)a[i]);
    }
    long long val1 = sn - s;   // x - y
    long long val2 = sn2 - s2; // x2 - y2

    val2 = val2 / val1; // x + y
    long long x = (val1 + val2) / 2;
    long long y = x - val1;
    return { (int) x, (int) y};
}
// X is missing and Y is repeating element 
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> ans = findMissingRepeating(a, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}