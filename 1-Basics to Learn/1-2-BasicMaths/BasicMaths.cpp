// -: BASIC MATHS :-
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;
// def :
// Brute force : The initial algorithm that omes to your mond when We started solving a problem.

// Digit Concept
// Extrecting Digit from the number.
void extract_digit(int n)
{
    while (
        n > 0)
    {
        int lastDigit = n % 10;
        cout << lastDigit;
        n = n / 10;
        cout << endl;
    }
    // Time Complexity : O(log base 10(n))
    // times n divided by any number it will be complexity of bigO of log base that num  from
    // Counting the number of digits in the number
}
// Count Character
void count_digit(int n)
{
    int cnt = 0;
    while (
        n > 0)
    {
        n % 10;
        cnt++;
        n = n / 10;
    }
    cout << "Number of Digits are" << " " << cnt;
    cout << endl;
}
// Reverse the number
void reverse_num(int n)
{
    int rev_num = 0;
    while ( n > 0)
    {
        int lastDigit = n % 10; 
        n = n / 10;
        rev_num = rev_num * 10 + lastDigit;
    }
    cout << "Reverse Number is " << rev_num;
}
// Check Palindrom or not
void isPalindrom(int n)
{
    int real_num = n;
    int rev_num = 0;
    while (
        n > 0)
    {
        int lastDigit = n % 10;
        n = n / 10;
        rev_num = rev_num * 10 + lastDigit;
    }

    if (rev_num == real_num)
    {
        cout << "Given number is Palindrom";
    }
    else
    {
        cout << "Given Number is not Palindrom";
    }
    cout << endl;
}
// armstrong number
void isArmstrong(int n)
{
    int sum = 0;
    int real_num = n;
    while (
        n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + lastDigit * lastDigit * lastDigit;
        n = n / 10;
    }

    if (real_num == sum)
    {
        cout << "Given number is Armstrong";
    }
    else
    {
        cout << "Given Number is not Armstrong";
    }
    cout << endl;
}
// Print All Divisor
void all_divisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "Divisor : " << i;
            cout << endl;
        }
    }
    // Time complexity is O(n) as loop runs from 1 to N
}

void all_divisors_2(int n)
{
    vector<int> ls;
    // Time Complexit is O(sqrt(n))
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if (n / i != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    // O(number of factors log(number of factors))
    sort(ls.begin(), ls.end());
    // O(number o factors)
    for (auto it : ls)
        cout << it << " ";
}

// Prime Number
void is_prime(int n)
{
    int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (n / i != i)
            {
                cnt++;
            }
        }
    }
    if (cnt == 2)
        cout << "This is a Prime number";
    else
        cout << "This is not a Prime Number";
}
// GCD (Greatest Common factor) 
void gcd(int n1, int n2)
{
    int gcd = 1;
    for (int i = 1; i <= min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    cout << "GCD is " << gcd;
    // But here Time complexity is O(n) in for every case even if you reverse the loop still worst case is O(n)
}

    // Euclidean eq states that :
    // gcd(a , b) == gcd(a - b , b) where a > b but here that is very long process if we have Big number like(102,10)
    // So more specific calculation will be
    //  gcd(a , b) == gcd(a % b , b) do this till one of them becomes 0 and if one of them is zero then other one is the GCD as simple as thattt.

void gcd_quclidean(int n1, int n2)
{
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
            n1 = n1 % n2;
        else
            n2 = n2 % n1;
    }
    if (n1 == 0)
        cout << "GCD is " << n2;
    else
        cout << "GCD is " << n1;
}

    // TL : log base phi (min (n1,n2)) phi ko janane ki jarurat nahi hai Jst keep in mind the TL for given algo.

int main()
{
    // extract_digit(123);

    // count_digit(1291);
    // count_digit(110);

    // reverse_num(345);

    // isPalindrom(343);
    // isPalindrom(900);

    // isArmstrong(153);
    // isArmstrong(151);

    // all_divisors(36);
    // all_divisors_2(36);

    // is_prime(11);

    // gcd(8,16);
    // gcd(11,19);

    // gcd_quclidean(8,16);
    // gcd_quclidean(11, 19);
}