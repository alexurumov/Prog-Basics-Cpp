#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int m, n, l, special, control;
    cin >> m >> n >> l >> special >> control;
    
    for (int im = m; im >= 1; im--)
    {
        for (int in = n; in >= 1; in--)
        {
            for (int il = l; il >= 1; il--)
            {
                int current_number = 100 * im + 10 * in + il;
                if (current_number % 3 == 0)
                {
                    special += 5;
                }
                else if (current_number % 10 == 5)
                {
                    special -= 2;
                }
                else if (current_number % 2 == 0)
                {
                    special *= 2;
                }
                if (special >= control)
                {
                    cout << "Yes! Control number was reached! Current special number is " << special << "." << endl;
                    return 0;
                }
                
            }
        }
    }
 
    
    cout << "No! " << special << " is the last reached special number." << endl;
    
    return 0;
}

