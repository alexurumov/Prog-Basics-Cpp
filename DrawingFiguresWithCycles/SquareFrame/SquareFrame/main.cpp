#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    cout << "+";
    for (int i = 1; i <= n - 2; i++)
    {
        cout << " -";
    }
    cout << " +" << endl;
    
    for (int row = 1; row <= n - 2; row++)
    {
    cout << "|";
    for (int col = 1; col <= n - 2; col++)
    {
        cout << " -";
    }
        cout << " |" << endl;
    }
    
    cout << "+";
    for (int i = 1; i <= n - 2; i++)
    {
        cout << " -";
    }
    cout << " +" << endl;
    
    return 0;
}

