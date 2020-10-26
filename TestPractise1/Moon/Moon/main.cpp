#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double speed, consumption, liters;
    cin >> speed >> consumption;

    double hours = ceil((2 * 384400) / speed) + 3;
    
    liters = 2 * 384400 * consumption / 100;
    
    cout << hours << endl << liters << endl;
    
    return 0;
}
