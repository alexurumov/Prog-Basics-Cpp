#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double pricez, pricep, profit;
    int kgz, kgp;
    cin >> pricez >> pricep >> kgz >> kgp;
    if (pricez < 0.00 or pricez > 1000.00 or pricep < 0.00 or pricep > 1000.00 or kgz < 0 or kgz > 1000 or kgp < 0 or kgp > 1000){
        cout << "Input is out of range [0.00 ; 1000.00]" << endl;
    } else {
    profit = (pricez * kgz + pricep * kgp) / 1.94;
    cout << fixed << setprecision(2) << profit << endl;
    }
    return 0;
}

