// Basic Recursion Concept
// Func calling itself , till the specific Condintion met.
// Stack overflow in the memory - When there is a infinte recursive fucntion there is no any end and also all function are waited one by one as not any fucntion is fully executed So that leads to the memory stack overflow. numerous fucntion calls are waiting this condition occures.
// Base Condition : the condition that stops the recursion thats called Base condition.
// Above is from lecture 1
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// basic recursion problems
int cnt = 0;

void print_name(int i, int n)
{
    if (n < i)
        return;
    cout << "Sneh" << endl;
    print_name(i + 1, n);
}
void linear_print_num(int i, int n)
{
    if (n < i)
        return;
    cout << i << endl;
    linear_print_num(i + 1, n);
}
void rev_linear_print_num(int i, int n)
{
    if (n < i)
        return;
    cout << n << endl;
    rev_linear_print_num(i, n - 1);
}
// Backtracking recursion  : that not allows to i+1 statement (Plus is not allowed)
void backtrack_linear_print(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    backtrack_linear_print(i - 1, n);
    cout << i << endl;
}
// Backtracking recursion  : that not allows to i-1 statement (Minus is not allowed)
void backtrack_rev_linear_print(int i, int n)
{
    if (i > n)
    {
        return;
    }
    backtrack_rev_linear_print(i + 1, n);
    cout << i << endl;
}
// Sum  : Paramitrize Way:-
void summation(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    summation(i - 1, sum + i);
}
int summation_2(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + summation_2(n - 1);
}
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

void rev_arr(int i, int n, int arr[])
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    rev_arr(i + 1, n, arr);
}

bool is_palindrom_str(int i, string s)
{
    int n = s.size();
    if (i >= n / 2)
    {
        return true;
    }
    if (s[i] != s[n - i - 1])
    {
        return false;
    }
    return is_palindrom_str(i + 1, s);
}
// Multiple Recursion Calls
// Fibonacci Series
void fib_by_loop(int n){
    int a= 0;
    int b =1;
    cout << a << endl;
    cout << b << endl;
    for (int i=1 ; i <=n-2 ; i++){
        int c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }    
}
int fib_by_rec(int n){
    if (n <=1){
        return n;
    }

    return fib_by_rec(n-1) + fib_by_rec(n-2);
    // TC is O(2^n) but not exectly
    // cause every guy called two another fucntions
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    // Lecture 2
    // print_name(1,n);
    // linear_print_num(1,n);
    // rev_linear_print_num(1,n);
    // backtrack_linear_print(n,n);
    // backtrack_rev_linear_print(1,n);
    // Lecture 3
    // summation(n , 0);
    // cout << summation_2(n);
    // cout << fact(n);

    // Reverse of Array :-
    // cout << "Enter number of array's elements : ";
    // cin >> n ;
    // int arr[n];
    // for(int i = 0 ; i <= n-1 ; i++){
    //     cin >> arr[i];
    // }
    // rev_arr(0,n,arr);
    // for (int  i = 0 ; i <= n-1 ; i++){
    //     cout << arr[i] << " ";
    // }

    cout << is_palindrom_str(0, "madam");
    // fib_by_loop(n);
    // cout << fib_by_rec(n);

}