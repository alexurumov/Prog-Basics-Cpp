#include <iostream>

using namespace std;

int main() {
    
    int number;
    double bonus = 0;
    cin >> number;
    
    if (number <= 100)
    {
        bonus += 5;
    }
    else if (number > 100 and number <= 1000)
    {
        bonus += number * 0.2;
    }
    else if (number > 1000)
    {
        bonus += number * 0.1;
    }
    
    if (number % 2 == 0)
    {
        bonus += 1;
    }
  
    if (number % 10 == 5)
    {
        bonus += 2;
    }
    
    cout << bonus << endl << number + bonus << endl;
    
    return 0;
}


