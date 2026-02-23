#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;
// See Brute force is simple :let me show you that first
// which is using Linear search function
// bool linearSearch(vector<int> &a, int n, int target)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] == target)
//             return true;
//     }
//     return false;
// }
// int longestConSeq(vector<int> a, int n)
// {

//     int longest = 1;

//     for (int i = 0; i < n; i++)
//     {
//         int x = a[i];
//         int cnt = 1;
//         while (linearSearch(a, n, x + 1))
//         {
//             x = x + 1;
//             cnt++;
//         }
//         longest = max(longest, cnt);
//     }
//     return longest;
// }
// this is how the brute force is working thahs tc of O(n^2 or n^3) So this is not so optimal

// Better approch:
// steps : sort the arr then check for each elem that it has its -1(just last elem in seq) number or not..
// int longestConSeq(vector<int> a, int n)
// {
//     sort(a.begin(), a.end());
//     int last_smallest = INT_MIN;
//     int cnt = 0;
//     int longest_count = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] - 1 == last_smallest)
//         {
//             cnt++;
//             last_smallest = a[i];
//         }
//         else if (a[i] == last_smallest)
//         {
//         }
//         else
//         {
//             cnt = 1;
//             last_smallest = a[i];
//         }
//         longest_count = max(longest_count, cnt);
//     }
//     return longest_count;
// }

// This is not yet optimal , for optimal approch :
int longestConSeq(vector<int> a, int n)
{
    unordered_set<int> st;
    int longest = 1;
    int cnt;
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }
    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                cnt++;
                x = x + 1;
            }
            longest =max(longest, cnt);
        }
    }
    return longest;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = longestConSeq(a, n);
    cout << ans;
}