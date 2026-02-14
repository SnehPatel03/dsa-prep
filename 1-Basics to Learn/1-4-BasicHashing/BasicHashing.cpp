// Basic Hashing
// Basiclly the way of doing the counting of an elements or the occurance of the elemenets in given array in general way of looping and check for each element will take much time SO hashing comes in

// Hashing is nothing but the precomputations according to array and use results when needed

// capacity of storing elems in Array is 10^7 thats too if that is declared globally if in the main then it will be deducted to the 10^6 So for large numbers we cant use and array as a Ds for Hashing So we need to Introduce new DS called Map/unorderd Map.

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter Size of Array : " << endl;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Enter elem " << i << ":";
//         cin >> arr[i];
//     }

//     // Pre-Computation
//     int hash[13] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cout << "Number of Queries : ";
//     cin >> q;
//     while (q--)
//     {
//         int number;
//         cout << "Enter number of element to find occurace : ";
//         cin >> number;
//         // fetch
//         cout << "ans is " << hash[number] << endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     unordered_map<int,int> mpp;
//     for (int i = 0 ; i<n;i++){
//         cin >> arr[i];
//         mpp[arr[i]]++;
//     }
//     for(auto it:mpp){
//         cout << it.first << " --> " << it.second << endl;
//     }

//     int q;
//     cin >> q;
//     while(q--){
//         int number;
//         cin >> number;
//         cout << mpp[number] << endl;
//     }
//     return 0;
//}
// This will take log(n) tc in all cases in Ordered Map
// but in unordedred map best and avg case have O(1) and worst has O(n) time complexity
// Worst case happend in one of 1000 times and thats bcz of internal collisions and Thats why first prioi is Unordered map and if Time limit excited then Use Map