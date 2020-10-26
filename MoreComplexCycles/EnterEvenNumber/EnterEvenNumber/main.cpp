#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int number;
    
    do
    {
        cout << "Enter even number: ";
        cin >> number;
        
        if (number % 2 != 0)
            cout << "The number is not even." << endl;
    } while (number % 2 != 0);
    {
        cout << "Even number entered: " << number << endl;
    }
    
    return 0;
}
