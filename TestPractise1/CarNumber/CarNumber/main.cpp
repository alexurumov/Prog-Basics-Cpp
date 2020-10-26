#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int first_number, second_number;
    cin >> first_number >> second_number;
    
    for (int one = first_number; one <= second_number; one++)
    {
        for (int two = first_number; two <= second_number; two++)
        {
            for (int three = first_number; three <= second_number; three++)
            {
                for (int four = first_number; four <= second_number; four++)
                {
                    if (((one % 2 == 0 && four % 2 == 1) || (one % 2 != 0 && four % 2 != 1)) && one > four && (two + three) % 2 == 0)
                    {
                        cout << one << two << three << four << " ";
                    }
                        
                }
            }
        }
    }
    
    return 0;
}

