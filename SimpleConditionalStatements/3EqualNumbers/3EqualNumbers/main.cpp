#include <iostream>

using namespace std;

int main()
{
    double number1, number2, number3;
    cin >> number1 >> number2 >> number3;
    if (number1 == number2 and number1 == number3 and number2 == number3)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}
