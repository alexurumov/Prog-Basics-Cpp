#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string figure;
    double area;
    cin >> figure;
    area = 0;
    if (figure == "square")
    {
        double side;
        cin >> side;
        area = side * side;
    }
    else if (figure == "rectangle")
    {
        double side1, side2;
        cin >> side1 >> side2;
        area = side1 * side2;
    }
    else if (figure == "circle")
    {
        double radius;
        cin >> radius;
        area = radius * radius * 3.14159265359;
    }
    else if (figure == "triangle")
    {
        double side, height;
        cin >> side >> height;
        area = side * height * 0.5;
    }
    cout << fixed << setprecision(3) << area << endl;
    return 0;
}
