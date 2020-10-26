#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int left_sum = 0;
    int right_sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        int left_number;
        cin >> left_number;
        left_sum += left_number;
    }
    
    for (int i = 0; i < n; i++)
    {
        int right_number;
        cin >> right_number;
        right_sum += right_number;
    }
    
    if (right_sum == left_sum)
    {
        cout << "Yes, sum = " << right_sum << endl;
    }
    else
    {
        cout << "No, diff = " << abs(right_sum - left_sum) << endl;
    }
    
    return 0;
}
