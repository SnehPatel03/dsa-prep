// So for the n/3 approch we need to track of 2 elems and also be sure that that elems not colide in a way that both have same value that is not going to work here and be sure that the proper solution is generated in first fir loop but we need to re check it
// also be sure this is called boyer-moore's algo

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

vector<int> maxOccurence(vector<int> a, int n)
{
    int cnt1 = 0;
    int cnt2 = 0;
    int elem1=INT_MIN, elem2=INT_MIN;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (cnt1 == 0 && a[i] != elem2)
        {
            cnt1 = 1;
            elem1 = a[i];
        }
        else if (cnt2 == 0 && a[i] != elem1)
        {
            cnt2 = 1;
            elem2 = a[i];
        }
        else if (a[i] == elem1)
        {
            cnt1++;
        }
        else if (a[i] == elem2)
        {
            cnt2++;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    ans.push_back(elem1);
    ans.push_back(elem2);

    // re checking block : 
    // int cnt3 = 0;
    // int cnt4 = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] == elem1)
    //     {
    //         cnt3++;
    //     }
    //     if (a[i] == elem2)
    //     {
    //         cnt4++;
    //     }
    // }
    // if (cnt3 > n / 3 && cnt4 > n / 3)
    // {
    //     ans.push_back(elem1);
    //     ans.push_back(elem2);
    // }
    // else
    // {
    //     ans.push_back(-1);
    // }
    return ans;
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
    vector<int> ans = maxOccurence(a, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}