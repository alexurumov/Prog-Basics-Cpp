#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    int number = 1;
    
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << number << endl;
        }
        number *= 2;
    }
    
    return 0;
}
