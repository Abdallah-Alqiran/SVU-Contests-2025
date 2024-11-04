#include <iostream>

using namespace std;

int main()
{
    // RectangleArea = Length * Width

    // initialize the variables
    // I will make them long long
    // because int will overflow
    // because 100000 * 100000 * 2 = 20000000000
    // this number will overflow and it's the worst case
    long long num;

    // take it from the user
    cin >> num;

    // print the rectangle area
    // as he say the length N and width 2N
//    cout << num * num * 2;


    // if you want to input the int
    // you should convert the ans to long long
    // like this ->
    cout << (long long) num * num * 2;

    return 0;
}
