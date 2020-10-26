#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    
    string year;
    int holidays, weekends;
    cin >> year >> holidays >> weekends;
    
    if (year == "normal")
    {
        cout << floor((48 - weekends) * 3.0 / 4 + weekends + holidays * 2.0 / 3) << endl;
    }

    if (year == "leap")
    {
         cout << floor(((48 - weekends) * 3.0 / 4 + weekends + holidays * 2.0 / 3) * 1.15) << endl;
    }
    return 0;
}
