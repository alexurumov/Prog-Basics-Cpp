#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    double odd_sum = 0;
    double even_sum = 0;
    double odd_max = INT_MIN;
    double odd_min = INT_MAX;
    double even_max = INT_MIN;
    double even_min = INT_MAX;
    
    for (int i = 1; i <= n; i++)
    {
        double current_number;
        cin >> current_number;
        
        if (i % 2 == 0)
        {
            even_sum += current_number;
            if (current_number > even_max)
            {
                even_max = current_number;
            }
            if (current_number < even_min)
                even_min = current_number;
        }
        else
        {
            odd_sum += current_number;
            if (current_number > odd_max)
            {
                odd_max = current_number;
            }
            if (current_number < odd_min)
                odd_min = current_number;
        }
    }
    if (n == 0)
    {
        cout << "OddSum=" << odd_sum << "," << endl << "OddMin=No" << "," << endl << "OddMax=No" << "," << endl << "EvenSum=" << even_sum << "," << endl << "EvenMin=No" << "," << endl << "EvenMax=No" << endl;
    }
    else if (n == 1)
    {
        cout << "OddSum=" << odd_sum << "," << endl << "OddMin=" << odd_min << "," << endl << "OddMax=" << odd_max << "," << endl << "EvenSum=" << even_sum << "," << endl << "EvenMin=No" << "," << endl << "EvenMax=No" << endl;
    }
    else
    {
         cout << "OddSum=" << odd_sum << "," << endl << "OddMin=" << odd_min << "," << endl << "OddMax=" << odd_max << "," << endl << "EvenSum=" << even_sum << "," << endl << "EvenMin=" << even_min << "," << endl << "EvenMax=" << even_max << endl;
    }
    return 0;
}
