// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     Pattern 1
    //  int n;
    //  cout << "Enter the value of n: " << endl ;
    //  cin >> n;
    //  for (int i = 0; i < n; i++)
    //  {
    //      for (int j = 0; j < n; j++)
    //      {
    //          cout << "*";
    //      }
    //      cout << endl;
    //  }

//     Pattern 2
//      int n;
//      cout << "Enter the value of n: " ;
//      cin >> n;
//      for (int i = 0; i < n; i++)
//      {
//          for (int j = 0; j < i+1; j++)
//          {
//              cout << "*";
//          }
//          cout << endl;
//      }

//     Pattern 3
//       int n;
//      cout << "Enter the value of n: " ;
//      cin >> n;
//      for (int i = 1; i <= n; i++)
//      {
//          for (int j = 1; j <= i; j++)
//          {
//              cout << j;
//          }
//          cout << endl;
//      }

//     Pattern 4
//       int n;
//      cout << "Enter the value of n: " ;
//      cin >> n;
//      for (int i = 1; i <= n; i++)
//      {
//          for (int j = 1; j <= i; j++)
//          {
//              cout << i;
//          }
//          cout << endl;
//      }

//     Pattern 5
//       int n;
//      cout << "Enter the value of n: " ;
//      cin >> n;
//      for (int i = n; i >= 0; i--)
//      {
//          for (int j = i; j >= 0; j--)
//          {
//              cout << "*";
//          }
//          cout << endl;
//      }

//     Pattern 6
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     for (int i = n; i > 0; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }

//     Pattern 7

//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int s = 0; s < n - i - 1; s++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < i * 2 + 1; j++)
//         {
//             cout << "*";
//         }
//         for (int s = 0; s < n - i - 1; s++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }

//     Pattern 8
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int s =0; s < i ; s++  )
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < 2*n - (2*i + 1); j++)
//         {
//             cout << "*";
//         }
//         for (int s =0; s < i ; s++  )
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }

//     Pattern 9
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int s = 0; s < n - i - 1; s++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < i * 2 + 1; j++)
//         {
//             cout << "*";
//         }
//         for (int s = 0; s < n - i - 1; s++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int s =0; s < i ; s++  )
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < 2*n - (2*i + 1); j++)
//         {
//             cout << "*";
//         }
//         for (int s =0; s < i ; s++  )
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }

//     Pattern 10
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     for (int i = 0 ; i < n ;i++){
//         for (int j = 0 ; j < i ; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = n ; i > 0 ;i--){
//         for (int j = i ; j > 0 ; j--){
//             cout << "*";
//         }
//         cout << endl;
//     }

//     Pattern 11
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     for(int i = 1 ; i<=n ; i++){
//         for (int j =1 ; j<=i ; j++){
//             if ( (i + j)%2 == 0 ){
//                 cout << "1";
//             }
//             else {
//                 cout << "0";
//             }
//         }
//         cout << endl;
//     }

//     Pattern 12
//      int n;
//      cout << "Enter the value of n: ";
//      cin >> n;
//      for(int i = 1 ; i<=n; i++){
//          // number
//          for (int j = 1 ; j<=i ; j++){
//              cout<< j;
//          }
//          // spaces
//          for (int s = 1 ; s<= 2 * (n-i) ; s++ ){
//              cout << " ";
//          }
//          // number
//          for (int j = i ; j>0 ; j--){
//              cout<< j;
//          }
//          cout<< endl;
//      }

//     pattern 13
//      int n;
//      cout << "Enter the value of n: ";
//      cin >> n;
//      int temp = 1 ;
//      for (int i = 1 ; i <=n ; i++){
//          for(int j = 1 ; j<=i ;j++){
//              cout << temp << " ";
//              temp ++ ;
//          }
//          cout << endl ;
//      }

//     pattern 14
//      int n;
//      cout << "Enter the value of n: ";
//      cin >> n;
//      for (int i = 0 ; i <n ; i++){
//         for(char ch = 'A' ; ch <= 'A' + i ; ch++){
//          cout << ch << " ";
//         }
//         cout <<  endl;
//      }

//     pattern 15
//      int n;
//      cout << "Enter the value of n: ";
//      cin >> n;
//      for (int i = n ; i > 0 ; i--){
//         for(char ch = 'A' ; ch <'A' + i ; ch++){
//          cout << ch << " ";
//         }
//         cout <<  endl;
//      }

//     Pattern 16
//      int n;
//      cout << "Enter the value of n: ";
//      cin >> n;
//      int temp = 0;
//      for (int i = 0 ; i <n ; i++){
//         char ch = 'A' + i;
//         for (int j = 0 ; j<=i;j++){
//          cout << ch;
//         }
//       cout <<  endl;
//      }

//     Pattern 17
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int s = 0; s < n - i - 1; s++)
//         {
//             cout << " ";
//         }
//         for (char ch = 'A'; ch <= 'A' + i; ch++)
//         {
//             cout << ch;
//         }
//         for (char ch = 'A' + i - 1; ch >= 'A'; ch--)
//         {
//             cout << ch;
//         }
//         cout << endl;
//     }

//     Pattern 18
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (char ch = 'E' - i; ch <= 'E'; ch++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }

//     Pattern 19
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         // star
//         for (int j = n; j > i - 1; j--)
//         {
//             cout << "*";
//         }
//         // space
//         for (int s = 0; s < (2 * i) - 2; s++)
//         {
//             cout << " ";
//         }
//         // star
//         for (int j = n; j > i - 1; j--)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         // star
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         // space
//         for (int s = 0; s < 2 * (n - i); s++)
//         {
//             cout << " ";
//         }
//         // star
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     Pattern 20
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;

//     for (int i = 1; i <= 2 * n - 1; i++)
//     {
//         int stars = i;
//         if (i > n)
//             stars = 2 * n - i;
//         // stars
//         for (int j = 1; j <= stars; j++)
//         {
//             cout << "*";
//         }
//         // spaces
//         int spaces = 2 * (n - i);
//         if (i > n)
//         {
//             spaces = 2 * (i - n);
//         }
//         for (int s = 1; s <= spaces; s++)
//         {
//             cout << " ";
//         }
//         // starts
//         for (int j = 1; j <= stars; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     Pattern 21
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     for (int i =1 ; i<=n ;i++){
//         for(int j = 1 ; j<=n ; j++){
//             if( (i==1 || j == 1) || (i==n || j == n)){
//                 cout << "*";
//             }
//             else cout  << " ";
//         }
//         cout << endl;
//     }
    
//     Pattern 22
//     theHardest
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     for ( int i = 0 ; i<2*n - 1; i++){
//         for (int j = 0 ; j<2*n-1 ; j++){
//             int top = i;
//             int left= j;
//             int bottom = (2*n-2) - i;
//             int right = (2*n-2) - j;
//             int mini = min(min(bottom,top),min(left,right));
//             int result = n - mini;
//             cout << result << " "; 
//         }
//         cout << endl;
//     }
// }