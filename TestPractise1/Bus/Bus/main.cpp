#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int passengers_start, stops;
    cin >> passengers_start >> stops;
    int sum = passengers_start;
    
    for (int i = 1; i <= stops; i++)
    {
        int pass_out, pass_in;
        cin >> pass_out >> pass_in;
        if (i % 2 == 1)
        {
            sum = sum + pass_in - pass_out + 2;
        }
        else
        {
            sum = sum + pass_in - pass_out - 2;
        }
    }
    
    cout << "The final number of passengers is : " << sum << endl;
    
    return 0;
}

