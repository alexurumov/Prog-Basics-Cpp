#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    char first_letter, second_letter, third_letter, fourth_letter;
    int digit;
    int counter = 0;
    cin >> first_letter >> second_letter >> third_letter >> fourth_letter >> digit;
    
    for (char first = first_letter; first >= 'A'; first--)
    {
        for (char second = second_letter; second >= 'a'; second--)
        {
            for (char third = third_letter; third >= 'a'; third--)
            {
                for (char fourth = fourth_letter; fourth >= 'a'; fourth--)
                {
                    for (int fifth = digit; fifth >= 0; fifth--)
                    {
                        counter++;
                    }
                }
            }
        }
    }
    
    cout << counter - 1 << endl;
    
    return 0;
}

