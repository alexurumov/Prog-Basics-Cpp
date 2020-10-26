#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    
    string input;
    
    getline(cin, input);
    
    int sum = 0;
    
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == 'a')
        {
            sum += 1;
        }
        else if (input[i] == 'e')
        {
            sum += 2;
        }
        else if (input[i] == 'i')
        {
            sum += 3;
        }
        else if (input[i] == 'o')
        {
            sum += 4;
        }
        else if (input[i] == 'u')
        {
            sum += 5;
        }
    }
    
    cout << sum << endl;
    
    return 0;
}
