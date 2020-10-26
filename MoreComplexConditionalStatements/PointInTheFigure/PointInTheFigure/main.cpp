#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    
    int h, x, y;
    cin >> h >> x >> y;
    
    if ((x == 0 && y >= 0 && y <= h) || (x == 3 * h && y >= 0 && y <= h) || (x == h && y >= h && y <= 4 * h) || (x == 2 * h && y >= h && y <= 4 * h) || (y == 4 * h && x >= h && x <= 2 * h) || (y == h && x >= 0 && x <= h) || (y == h && x >= 2 * h && x <= 3 * h) || (y == 0 && x >= 0 && x <= 3 * h))
    {
        cout << "border" << endl;
    }
    else if ((0 < x && x < 3 * h && 0 < y && y < h) || (h < x && x < 2 * h && h < y && y < 4 * h) || (y == h && h <= x && x <= 2 * h))
    {
        cout << "inside" << endl;
    }
    else
    {
        cout << "outside" << endl;
    }
    
    return 0;
}

