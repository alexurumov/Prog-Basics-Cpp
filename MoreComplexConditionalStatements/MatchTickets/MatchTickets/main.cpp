#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    double budget, cost, total;
    string type;
    int people;
    
    cin >> budget >> type >> people;
    
    cost = 0.00;
    total = 0.00;
    
    if (people >= 1 && people <=4)
        cost = budget * 3.00 / 4.00;
    else if (people >= 5 && people <= 9)
        cost = budget * 3.00 / 5.00;
    else if (people >= 10 && people <= 24)
        cost = budget / 2.00;
    else if (people >= 25 && people <= 49)
        cost = budget * 2.00 / 5.00;
    else if (people > 50)
        cost = budget / 4.00;
    
    if (type == "VIP")
    {
        total = cost + 499.99 * people;
    }
    else if (type == "Normal")
    {
        total = cost + 249.99 * people;
    }
    
    if (budget >= total)
    {
        cout << "Yes! You have " << fixed << setprecision(2) << budget - total << " leva left." << endl;
    }
    else
    {
        cout << "Not enough money! You need " << fixed << setprecision(2) << total - budget << " leva." << endl;
    }
    
    return 0;
}
