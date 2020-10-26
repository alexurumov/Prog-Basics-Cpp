#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    double distance;
    string vhod, izhod;
    cin >> distance >> vhod >> izhod;
    
    if (vhod == "mm")
    {
        distance = distance / 1000;
    }
    else if (vhod == "cm")
    {
        distance = distance / 100;
    }
    else if (vhod == "mi")
    {
        distance = distance / 0.000621371192;
    }
    else if (vhod == "in")
    {
        distance = distance / 39.3700787;
    }
    else if (vhod == "km")
    {
        distance = distance / 0.001;
    }
    else if (vhod == "ft")
    {
        distance = distance / 3.2808399;
    }
    else if (vhod == "yd")
    {
        distance = distance / 1.0936133;
    }
    
    if (izhod == "mm")
    {
        distance = distance * 1000;
    }
    else if (izhod == "cm")
    {
        distance = distance * 100;
    }
    else if (izhod == "mi")
    {
        distance = distance * 0.000621371192;
    }
    else if (izhod == "in")
    {
        distance = distance * 39.3700787;
    }
    else if (izhod == "km")
    {
        distance = distance * 0.001;
    }
    else if (izhod == "ft")
    {
        distance = distance * 3.2808399;
    }
    else if (izhod == "yd")
    {
        distance = distance * 1.0936133;
    }
    
    
    
    cout << fixed << setprecision(8) << distance << endl;
    return 0;
}
