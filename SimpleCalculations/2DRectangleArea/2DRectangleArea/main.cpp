#include <iostream>

using namespace std;

int main()
{
    double x1, y1, x2, y2;
    double side1, side2 = 0.0;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 > x2) {
        side1 = x1 - x2;
    } else {
        side1 = x2 - x1;
    }
    if (y1 > y2) {
        side2 = y1 - y2;
    } else {
        side2 = y2 - y1;
    }
    float area = side1 * side2;
    float perimeter = (side1 + side2) * 2;
    printf ("%f\n%f\n", area, perimeter);
    return 0;
}


