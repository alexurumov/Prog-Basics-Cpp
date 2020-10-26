#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double budget, chocolates, milk;
    cin >> budget >> chocolates >> milk;
    
    int mandarines_count = chocolates * 0.65;
    
    double cost = chocolates * 0.65 + milk * 2.70 + mandarines_count * 0.20;
    
    if (budget < cost)
    {
        cout << "Not enough money, you need " << fixed << setprecision(2) << cost - budget << " more!" << endl;
    }
    else
    {
        cout << "You got this, " << fixed << setprecision(2) << budget - cost << " money left!" << endl;
    }
    
    return 0;
}
