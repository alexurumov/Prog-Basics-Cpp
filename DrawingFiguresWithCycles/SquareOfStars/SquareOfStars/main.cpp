#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    for (size_t i = 0; i < n; i++)
    {
        for (size_t i = 0; i < n; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}

