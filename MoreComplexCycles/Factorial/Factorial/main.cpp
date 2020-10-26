#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    int factorial = 1;
    
    do
    {
        factorial *= n;
        n--;
    }
    while (n > 1);
    
    cout << factorial << endl;
    
    return 0;
}
