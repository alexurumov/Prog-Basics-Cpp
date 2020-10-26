#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col ++)
        {
            int number = row + col + 1;
            if (number > n)
                number = 2 * n - number;
            cout << number << " ";
        }
         cout << endl;
    }
    
    return 0;
}
