#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    int dni, igra;
    cin >> dni;
    igra = (365 - dni) * 63 + dni * 127;
    if (igra > 30000)
    {
        cout << "Tom will run away" << endl << (igra - 30000) / 60 << " hours and " << (igra - 30000) % 60 << " minutes more for play" << endl;
    }
    else
    {
        cout << "Tom sleeps well" << endl << (30000 - igra) / 60 << " hours and " << (30000 - igra) % 60 << " minutes less for play" << endl;
    }
    
    return 0;
}


