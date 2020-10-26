#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, h, area;
    cin >> a >> h;
    area = a * h / 2;
    
    cout << fixed << setprecision(2) << area << endl;

    return 0;
}



