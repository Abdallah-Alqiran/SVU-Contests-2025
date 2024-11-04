#include <iostream>
// I am calling algorithm library because I will use min and max function
#include <algorithm>

using namespace std;

int main()
{
    // get the max and min from four numbers
    // we will make 4 variables
    // we will make another 2 variables
    // min -> for min value we will give it biggest value
    // max -> for max value we will give it smallest value
    int A, B, C, D;
    int mx,mn;

    // take the 4 numbers from the user
    cin >> A >> B >> C >> D;

    // I will use the built in function to get the max and min elements
    // I should first write #include <algorithm>
    mx = max({A, B, C, D});
    mn = min({A, B, C, D});

    // print the answer
    cout << mn << '\n' << mx;

    // the same
    /*
    // print the smallest element
    if (A <= B && A <= C && A <= D)
        cout << A;
    else if (B <= A && B <= C && C <= D)
        cout << B;
    else if (C <= A && C <= B && C <= D)
        cout << C;
    else
        cout << D;
    // print new line to get the same output as he want
    cout << '\n';
    // print the biggest element
    if (A >= B && A >= C && A >= D)
        cout << A;
    else if (B >= A && B >= C && C >= D)
        cout << B;
    else if (C >= A && C >= B && C >= D)
        cout << C;
    else
        cout << D;
    */


    return 0;
}
