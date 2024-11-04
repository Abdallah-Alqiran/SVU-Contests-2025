#include <iostream>

using namespace std;

int main()
{
    // we want to print the last number of 5^n
    // let's use pen and paper and calculate the following numbers
    // 1 -> 5^1  = 5
    // 2 -> 5^2  = 25
    // 3 -> 5^3  = 125
    //10 -> 5^10 = 9765625
    // can you see?
    // last number in all of them is 5
    // so the answer is 5 almost always
    // but if n = 0
    // 0 -> 5^0 = 1

    long long N;

    cin >> N;

    if (N != 0)
        cout << 5;
    else
        cout << 1;

    return 0;
}
