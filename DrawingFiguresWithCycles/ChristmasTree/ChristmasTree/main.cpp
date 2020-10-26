#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    string spaces, stars;
    
    for (int row = 0; row <= n; row++)
    {
        stars = string(row, '*');
        spaces = string(n - row, ' ');
        cout << spaces << stars << " | " << stars << endl;
    }
    
    return 0;
}

