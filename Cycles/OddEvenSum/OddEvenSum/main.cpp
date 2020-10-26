#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int even_sum = 0;
    int odd_sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        int current_number;
        cin >> current_number;
        
        if (i % 2 == 0)
        {
            even_sum += current_number;
        }
        else
        {
            odd_sum += current_number;
        }
    }
    
    if (odd_sum == even_sum)
    {
        cout << "Yes" << endl << "Sum = " << odd_sum << endl;
    }
    else
    {
        cout << "No" << endl << "Diff = " << abs(odd_sum - even_sum) << endl;
    }
    
    return 0;
}
