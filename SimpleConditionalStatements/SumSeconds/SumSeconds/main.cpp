#include <iostream>

using namespace std;

int main() {
    int sek1, sek2, sek3;
    cin >> sek1 >> sek2 >> sek3;
    int secs = sek1 + sek2 + sek3;
    int minutes = secs / 60;
    int left_secs = secs % 60;
    if (left_secs < 10)
    {
        cout << minutes << ":0" << left_secs << endl;
    }
    else
    {
        cout << minutes << ":" << left_secs << endl;
    }

    return 0;
}
