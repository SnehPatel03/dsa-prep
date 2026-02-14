// #include <bits/stdc++.h>
// using namespace std;
//  Now for sure If we talk abt the all the characters capacity of an arr will be 256 that is not cause any issue to the Array, SO we can easily use an Array for Hashing DataStruc. for Charaters.
// int main()
// {
//     string s;
//     cout << "Enter String: ";
//     cin >> s;

//     // pre computation
//     int hash[26] = {0};
//     for (int i = 0; i < s.size(); i++)
//     {
//         hash[s[i] - 'a']++;
//     }
//     int q;
//     cout << "Enter Number of Queries : ";
//     cin >> q;
//     while (q--)
//     {
//         char c;
//         cout << "Enter char for you want to know the occurance : ";
//         cin >> c;
//         cout << "Ans is " << hash[c - 'a'] << endl;
//     }
//     return 0;
// }