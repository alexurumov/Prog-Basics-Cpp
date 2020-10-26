#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int time_break;
    
    double package_price, adventure_price, coffee_price;
    
    cin >> time_break >> package_price >> adventure_price >> coffee_price;
    
    time_break -= 15;
    
    double total_spent = package_price * 3 + adventure_price * 2 + coffee_price;
    
    cout << fixed << setprecision(2) << total_spent << endl << time_break << endl;
    
    return 0;
}
