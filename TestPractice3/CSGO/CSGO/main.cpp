#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {
    
    int n, money;
    cin >> n >> money;
    
    int items_value = 0;
    
        for (int i = 1; i <= n; i++)
        {
            string item;
            cin >> item;
            if (item == "ak47")
                items_value += 2700;
            else if (item == "awp")
                items_value += 4750;
            else if (item == "sg553")
                items_value += 3500;
            else if (item == "grenade")
                items_value += 300;
            else if (item == "flash")
                items_value += 250;
            else if (item == "glock")
                items_value += 500;
            else if (item == "bazooka")
                items_value += 5600;
        }
  
    if (n > 7)
        cout << "Sorry, you can't carry so many things!" << endl;
    else
    {
    if (money >= items_value)
        cout << "You bought all " << n << " items! Get to work and defeat the bomb!" << endl;
    else
        cout << "Not enough money! You need " << items_value - money << " more money." << endl;
    }
    
    return 0;
}
