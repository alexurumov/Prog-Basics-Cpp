#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double cpu_price, graphic_price, ram_price, ram_count, discount;
    cin >> cpu_price >> graphic_price >> ram_price >> ram_count >> discount;
    
    double toral_price = cpu_price * 1.57 * (1.00 - discount) + graphic_price * 1.57 * (1.0 - discount) + ram_price * ram_count * 1.57;
    
    cout << "Money needed - " << fixed << setprecision(2) << toral_price << " leva." << endl;
    
    return 0;
}
