#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    // base case
    if (n == 1)
        return 1;

    return n + sum(n - 1);
}

int main()
{
    int n;

    // taking input from user
    cout << "enter n ";
    cin >> n;

    // printing the nth fibonacci number using function fib
    cout << "Sum of first n natural number is  " <<sum(n);
}