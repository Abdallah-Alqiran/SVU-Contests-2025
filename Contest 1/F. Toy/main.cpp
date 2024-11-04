#include <iostream>

using namespace std;

int main()
{
    // take 3 numbers
    // see if first + second >= third
    // print yes
    // else print no

    // we can initialize them int, because the constrains is low
    int A,B,C;

    cin >> A >> B >> C;

    cout << ((A + B >= C)? "Yes" : "No");

    // the same
    /*
    if (A + B >= C)
        cout << "Yes";
    else
        cout << "No";
    */
    return 0;
}
