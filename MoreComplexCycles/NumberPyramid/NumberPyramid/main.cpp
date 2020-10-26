#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int row = 1;
    int num= 1;
    
    while (num <= n)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << num << " ";
            num++;
            if (num > n)
                break;
        }
        row ++;
        cout << endl;
    }
    
    return 0;
}
