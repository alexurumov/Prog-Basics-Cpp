#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int bitcoins;
    long double iuana, total;
    double vig;
    cin >> bitcoins >> iuana >> vig;
    total = ((bitcoins * 1168 / 1.95) + (iuana * 0.15 * 1.76 / 1.95)) * (1 - (vig / 100));
    cout << fixed << setprecision(2) << total << endl;
    return 0;
}
