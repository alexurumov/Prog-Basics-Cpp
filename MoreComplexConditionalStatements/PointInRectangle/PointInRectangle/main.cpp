#include <iostream>
#include <string>

using namespace std;

int main() {
    
    double x1, x2, y1, y2, x, y;
    
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
    
    if (x1 <= x and x <= x2 and y1 <= y and y <= y2)
    {
        cout << "Inside" << endl;
    }
    else
    {
        cout << "Outside" << endl;
    }
    
    return 0;
}


