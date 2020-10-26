#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    int num1, num2;
    char operation;
    cin >> num1 >> num2 >> operation;
    
    
    if (operation == '+')
    {
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        if ((num1 + num2) % 2 == 0)
        {
            cout << " - even" << endl;
        }
        else
        {
            cout << " - odd" << endl;
        }
    }
    else if (operation == '-')
    {
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        if ((num1 - num2) % 2 == 0)
        {
            cout << " - even" << endl;
        }
        else
        {
            cout << " - odd" << endl;
        }
    }
    else if (operation == '*')
    {
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        if ((num1 * num2) % 2 == 0)
        {
            cout << " - even" << endl;
        }
        else
        {
            cout << " - odd" << endl;
        }
    }
    if (num2 == 0)
    {
        cout << "Cannot divide " << num1 << " by zero" << endl;
    }
    else
    {
        if (operation == '/')
        {
            cout << num1 << " / " << num2 << " = " << fixed << setprecision(2) << float(num1) / float (num2) << endl;
        }
        else if (operation == '%')
        {
            cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
        }
    }
    return 0;
}
