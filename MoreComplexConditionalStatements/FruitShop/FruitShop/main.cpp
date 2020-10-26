#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    
    string fruit, day;
    double quantity;
    cin >> fruit >> day >> quantity;
    
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        if (fruit == "banana")
        {
            cout << fixed << setprecision(2) << 2.5 * quantity << endl;
        }
        else if (fruit == "apple")
        {
            cout << fixed << setprecision(2) << 1.2 * quantity << endl;
        }
        else if (fruit == "orange")
        {
            cout << fixed << setprecision(2) << 0.85 * quantity << endl;
        }
        else if (fruit == "grapefruit")
        {
            cout << fixed << setprecision(2) << 1.45 * quantity << endl;
        }
        else if (fruit == "kiwi")
        {
            cout << fixed << setprecision(2) << 2.7 * quantity << endl;
        }
        else if (fruit == "pineapple")
        {
            cout << fixed << setprecision(2) << 5.5 * quantity << endl;
        }
        else if (fruit == "grapes")
        {
            cout << fixed << setprecision(2) << 3.85 * quantity << endl;
        }
        else
        {
            cout << "error" << endl;
        }
    }
    else if (day == "Saturday" || day == "Sunday")
    {
        if (fruit == "banana")
        {
            cout << fixed << setprecision(2) << 2.7 * quantity << endl;
        }
        else if (fruit == "apple")
        {
            cout << fixed << setprecision(2) << 1.25 * quantity << endl;
        }
        else if (fruit == "orange")
        {
            cout << fixed << setprecision(2) << 0.9 * quantity << endl;
        }
        else if (fruit == "grapefruit")
        {
            cout << fixed << setprecision(2) << 1.6 * quantity << endl;
        }
        else if (fruit == "kiwi")
        {
            cout << fixed << setprecision(2) << 3 * quantity << endl;
        }
        else if (fruit == "pineapple")
        {
            cout << fixed << setprecision(2) << 5.6 * quantity << endl;
        }
        else if (fruit == "grapes")
        {
            cout << fixed << setprecision(2) << 4.2 * quantity << endl;
        }
        else
        {
            cout << "error" << endl;
        }
    }
    else
    {
        cout << "error" << endl;
    }
    
    return 0;
}
