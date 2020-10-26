#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    string spaces, stars, pipes, slashes;
    
    int middle = (n + 1) / 2;
    
    stars = string(2 * n, '*');
    spaces = string(n, ' ');
    pipes = string(n, '|');
    slashes = string(n * 2 - 2, '/');
    
    // first row
    cout << stars << spaces << stars << endl;
    
    //body
    for (int row = 2; row <= n - 1; row++)
    {
        cout << "*" << slashes << "*";
        if (row == middle)
        {
            cout << pipes;
        }
        else
        {
            cout << spaces;
        }
        cout << "*" << slashes << "*" << endl;;
    }
    
    // last row
    cout << stars << spaces << stars << endl;
    
    
    return 0;
}

// 1, 2 -> 1
// 3, 4 -> 2
// 5, 6 -> 3
// (n + 1) / 2
