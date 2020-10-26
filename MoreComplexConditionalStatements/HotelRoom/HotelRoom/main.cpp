#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    string month;
    int days;
    double price_a = 0.00;
    double price_s = 0.00;
    
    cin >> month >> days;
    
    if (month == "May" || month == "October")
    {
        price_a = 65.00 * days;
        price_s = 50.00 * days;
        if (days > 7 && days <= 14)
        {
            price_s *= 95.00 / 100.00;
        }
        else if (days > 14)
        {
            price_s *= 7.00 / 10.00;
            price_a *= 9.00 / 10.00;
        }
    }
    else if (month == "June" || month == "September")
    {
        price_a = 68.70 * days;
        price_s = 75.20 * days;
        if (days > 14)
        {
            price_s *= 8.00 / 10.00;
            price_a *= 9.00 / 10.00;
        }
    }
    else if (month == "July" || month == "August")
    {
        price_a = 77.00 * days;
        price_s = 76.00 * days;
        if (days > 14)
        {
            price_a *= 9.00 / 10.00;
        }
    }
    cout << "Apartment: " << fixed << setprecision(2) << price_a << " lv." << endl << "Studio: " << fixed << setprecision(2) << price_s << " lv." << endl;
 
    
    return 0;
}
