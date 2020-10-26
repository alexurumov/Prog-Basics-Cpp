#include <iostream>
#include <cmath>
#include <string>
#include <array>

using namespace std;

int main() {
    
    int n, number1, number2;
    cin >> n >> number1 >> number2;
    int sum = number1 + number2;
    int difference = 0;
    
    for (int i = 0; i < n - 1; i++)
    {
        
        int num1, num2;
        cin >> num1 >> num2;
        
        int current_sum = num1 + num2;
        
        int current_diff;
        current_diff = abs (sum - current_sum);
        
        if (current_diff > difference)
        {
            difference = current_diff;
        }
        
        sum = current_sum;
    }
    
    if (difference == 0)
    {
        cout << "Yes, value=" << sum << endl;
    }
    else
    {
        cout << "No, maxdiff=" << difference << endl;
    }
  
    return 0;
}



