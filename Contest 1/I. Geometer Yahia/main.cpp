#include <iostream>
// for setprecision
#include <iomanip>
// for sqrt
#include <cmath>

using namespace std;

int main()
{
    // we have the area of the circle
    // we want to remove the square area
    // so we will calculate the square area

    // circle area = 3.14 * r * r
    // r = sqrt(area / 3.14)
    // square diagonal = 2 * r (diagonal of square is the diagonal of the circle)  diagonal -> الوتر
    // (square diagonal)^2 = (square length)^2 + (square length)^2    (فيثاغورث)
    // (square diagonal)^2 = 2 * (square length)^2
    // square length = sqrt((square diagonal * square diagonal) / 2)
    // square area = square length * square length

    // green area = circle area - square area

    // for printing 4 numbers after .
    cout << fixed << setprecision(4);

    double circleArea;      cin >> circleArea;

    double r = sqrt(circleArea / 3.14);
    double squareDiagonal = 2 * r;
    double squareLength = sqrt((squareDiagonal * squareDiagonal) / 2);
    double squareArea = squareLength * squareLength;

    double greenArea = circleArea - squareArea;

    cout << greenArea;

    return 0;
}
