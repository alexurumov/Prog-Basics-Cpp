#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    for (int row = 1; row <= n; row++)
    {
        cout << "$";
        for (int col = 2; col <= row; col++)
        {
            cout << " $";
        }
        cout << endl;
        
    }
    
    return 0;
}

