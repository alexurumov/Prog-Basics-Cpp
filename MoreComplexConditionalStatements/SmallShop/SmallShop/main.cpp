#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string product, grad;
    double quantity;
    
    cin >> product >> grad >> quantity;
    
    if (grad == "Sofia")
    {
        if (product == "coffee")
        {
            cout << 0.5 * quantity << endl;
        }
        else if (product == "water")
        {
            cout << 0.8 * quantity << endl;
        }
        else if (product == "beer")
        {
            cout << 1.2 * quantity << endl;
        }
        else if (product == "sweets")
        {
            cout << 1.45 * quantity << endl;
        }
        else if (product == "peanuts")
        {
            cout << 1.6 * quantity << endl;
        }
    }
    else if (grad == "Plovdiv")
    {
        if (product == "coffee")
        {
            cout << 0.4 * quantity << endl;
        }
        else if (product == "water")
        {
            cout << 0.7 * quantity << endl;
        }
        else if (product == "beer")
        {
            cout << 1.15 * quantity << endl;
        }
        else if (product == "sweets")
        {
            cout << 1.3 * quantity << endl;
        }
        else if (product == "peanuts")
        {
            cout << 1.5 * quantity << endl;
        }
    }
    else if (grad == "Varna")
    {
        if (product == "coffee")
        {
            cout << 0.45 * quantity << endl;
        }
        else if (product == "water")
        {
            cout << 0.7 * quantity << endl;
        }
        else if (product == "beer")
        {
            cout << 1.1 * quantity << endl;
        }
        else if (product == "sweets")
        {
            cout << 1.35 * quantity << endl;
        }
        else if (product == "peanuts")
        {
            cout << 1.55 * quantity << endl;
        }
    }
    return 0;
}

