#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // We want to get all even numbers and odd numbers from 1 to n
    // but what if we try to think about this problem using pen and paper
    // let say n = 10
    // we want to make
    // 1 - 2 + 3 - 4 + 5 - 6 + 7 - 8 + 9 - 10 lets simplify the equation
    //  -1      -1      -1      -1      -1    = -5
    // get the abs(-5) = 5

    // let's check another number and see if it's true
    // n = 7
    // 1 - 2 + 3 - 4 + 5 - 6 + 7
    //  -1      -1       -1    + 7
    // 4


    // so the answer will be N / 2 if even and N / 2 + 1 if odd

    long long N;        cin >> N;

    if (N % 2 == 0)
        cout << N /2;
    else
        cout << N / 2 + 1;


    return 0;
}
