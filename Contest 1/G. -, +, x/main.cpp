#include <iostream>
// for max between more than two elements
#include <algorithm>

using namespace std;

int main()
{
    // make 3 variables and see what is the biggest

    // create them long long because int will overflow
    long long A,B;

    cin >> A >> B;

    // * + -
    long long X = A * B;
    long long Y = A + B;
    long long Z = A - B;

    // create variable to get the max number
    // you should include algorithm library
    long long mx = max({X,Y,Z});

    cout << mx;

    return 0;
}
