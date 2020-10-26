#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int sum = 0;
    int max_number = INT_MIN;
    
    for (int i = 0; i < n; i++)
    {
        int current_number;
        cin >> current_number;
        sum += current_number;
        if (current_number > max_number)
        {
            max_number = current_number;
        }
    }
    
    if (sum - max_number == max_number)
    {
        cout << "Yes" << endl << "Sum = " << max_number << endl;
    }
    else
    {
        cout << "No" << endl << "Diff = " << abs(max_number - (sum - max_number)) << endl;
    }
    
    return 0;
}
