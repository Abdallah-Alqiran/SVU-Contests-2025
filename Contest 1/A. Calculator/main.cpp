#include<iostream>
# include <cmath>
using namespace std ;
int main()
{
    // initializing the variables
    // create A, B in case / in the question he told us not to print fractions
    // we can make them int because the worst case is 10000
    // and if we make 10000 * 10000 it will give us 100000000
    // it won't overflow
    int A,B;
    char C;

    // take the first number, char, second number
    cin >> A >> C >> B;


    // solution with switch case
    switch(C)
    {
    case '+':
        cout << A + B;
        break;
    case '-':
        cout << A - B;
        break;
    case '*':
        cout << A * B;
        break;
    default:
        cout << A / B;
        break;
    }


    /// the same answer using if condition
    /*
    if (C == '+')
    {
        cout << A + B;
    }
    else if (C == '-')
    {
        cout << A - B;
    }
    else if (C == '*')
    {
        cout << A * B;
    }
    else
    {
        cout << A / B;
    }
    */

    return 0;
}
