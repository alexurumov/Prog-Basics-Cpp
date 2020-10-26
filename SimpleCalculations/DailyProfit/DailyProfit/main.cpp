#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int rab_dni;
    double pari_den, kurs, total;
    cin >> rab_dni >> pari_den >> kurs;
    total = rab_dni * pari_den * 14.5 * 0.75 * kurs / 365;
    cout << fixed << setprecision(2) << total << endl;
    return 0;
}
