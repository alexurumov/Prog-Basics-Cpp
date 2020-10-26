#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int years;
    
    double washing_machine, toy_price;
    
    cin >> years >> washing_machine >> toy_price;
    
    int money_years = 0;
    int toys_years = 0;
    
    for (int i = 1; i <= years; i++)
    {
        if (i % 2 == 0)
        {
            money_years++;
        }
        else
        {
            toys_years++;
        }
    }
    
    double money = 0;
    
    for (int i = 1; i <= money_years; i++)
    {
        money += 10 * i;
    }
    
    money = money - money_years + toys_years * toy_price;
    
    if (money >= washing_machine)
    {
        cout << "Yes! " << fixed << setprecision(2) << money - washing_machine << endl;
    }
    else
    {
        cout << "No! " << fixed << setprecision(2) << washing_machine - money << endl;
    }
    
    return 0;
}
