#include <iostream>

using namespace std;

int main()
{
    float radius, area, perimeter;
    cin >> radius;
    area = 3.14159265359 * radius * radius;
    perimeter = 2 * 3.14159265359 * radius;
    
    printf ("%f\n%f\n", area, perimeter);
    return 0;
}
