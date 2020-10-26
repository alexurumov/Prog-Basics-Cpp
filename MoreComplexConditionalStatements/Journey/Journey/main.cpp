#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    double budget;
    string season;
    cin >> budget >> season;
    
    if (budget <= 100.00)
    {
        cout << "Somewhere in Bulgaria" << endl;
        if (season == "summer")
        {
            cout << "Camp - " << fixed << setprecision(2) << budget * 0.3 << endl;
        }
        else if (season == "winter")
        {
            cout << "Hotel - " << fixed << setprecision(2) << budget * 0.7 << endl;
        }
    }
    else if (budget <= 1000.00)
    {
        cout << "Somewhere in Balkans" << endl;
        if (season == "summer")
        {
            cout << "Camp - " << fixed << setprecision(2) << budget * 0.4 << endl;
        }
        else if (season == "winter")
        {
            cout << "Hotel - " << fixed << setprecision(2) << budget * 0.8 << endl;
        }
    }
    else if (budget > 1000.00)
    {
        cout << "Somewhere in Europe" << endl << "Hotel - " << fixed << setprecision(2) << budget * 0.9 << endl;
    }
    
    return 0;
}
