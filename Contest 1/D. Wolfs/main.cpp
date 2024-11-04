#include <iostream>
// for using sqrt
#include <cmath>

using namespace std;

int main()
{
    // The problem gives us a number, which represents the result of summing integers from 1 to n.
    // Our task is to find the original n value given this sum.
    // The summation formula is: x = (n * (n + 1)) / 2
    // Here, x is the given number, and we need to solve for n.

    // x = (n * (n + 1)) / 2
    // x = (n^2 + n) / 2 (rearrange the formula)
    // 2x = n^2 + n (Multiplying both sides by 2):
    // This becomes a quadratic equation: n^2 + n - 2x = 0

    // Solve for n using the quadratic formula:
    // n = (-b ± sqrt(b^2 - 4 * a * c)) / (2 * a)
    // we will just take the positive value
    // In our equation: a = 1, b = 1, c = -2 * x
    // this is the law
    // n = (-1 + sqrt(1 + 8 * x)) / 2

    // let's solve our problem

    // initialize the variable and we will make it double because I want to divide
    double X;
    // take the number from the user
    cin >> X;
    // using sqrt, so I should put cmath library
    long long ans = ceil((-1 + sqrt(1 + 8 * X)) / 2);

    cout << ans;
    return 0;
}




