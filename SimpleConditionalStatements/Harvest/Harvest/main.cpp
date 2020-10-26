#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    int loze, litri, rabotnici;
    double grozde;
    cin >> loze >> grozde >> litri >> rabotnici;
    double total = loze * grozde * 0.4 / 2.5;
    
    if (total < litri)
    {
        cout << "It will be a tough winter! More " << floor(litri - total) << " liters wine needed." << endl;
    }
    else
    {
        cout << "Good harvest this year! Total wine: " << floor(total) << " liters. " << endl << ceil(total - litri) << " liters left -> " << ceil((total - litri) / rabotnici) << " liters per person." << endl;
    }
    
    return 0;
}



