#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {
    
    int points;
    string arena, day, condition;
    
    cin >> points;
    
    cin.ignore();
    
    getline(cin, arena);
    
    cin >> day >> condition;
    
    int price_total = 0;
    int items_bought = 0;
    double discount = 0.00;
    
    
    if (condition == "Poor")
        price_total = 7000;
    else if (condition == "Normal")
        price_total = 14000;
    else if (condition == "Legendary")
        price_total = 21000;
    
    if ((arena == "Nagrand") && (day == "Monday" || day == "Wednesday"))
        discount = 0.05;
    
    else if ((arena == "Gurubashi") && (day == "Tuesday" || day == "Thursday"))
        discount = 0.1;
    
    else if ((arena == "Dire Maul") && (day == "Friday" || day == "Saturday"))
        discount = 0.07;
    
    int price_toy = price_total * (1 - discount) / 5;
    
    for (int i = 1; i <= 5; i++)
    {
        if (points >= price_toy)
        {
            points -= price_toy;
            items_bought++;
        }
        else
            break;
    }
    
    cout << "Items bought: " << items_bought << endl;
    cout << "Arena points left: " << points << endl;
    
    if (items_bought == 5)
        cout << "Success!" << endl;
    else
        cout << "Failure!" << endl;
    
    return 0;
}
