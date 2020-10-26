#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int km;
    string daynight;
    double price = 0;
    cin >> km >> daynight;
    
    if (km < 20)
    {
        if (daynight == "day")
        {
            price = 0.7 + 0.79 * km;
        }
        else if (daynight == "night")
        {
            price = 0.7 + 0.9 * km;
        }
    }
    else if (km >= 20 and km < 100)
    {
        price = 0.09 * km;
    }
    else if (km >= 100)
    {
        price = 0.06 * km;
    }
    cout << fixed << setprecision(2) << price << endl;
    return 0;
}
