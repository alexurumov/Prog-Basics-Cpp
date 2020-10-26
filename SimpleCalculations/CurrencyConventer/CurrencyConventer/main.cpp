#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double suma, rezult;
    string vhod, izhod;
    cin >> suma >> vhod >> izhod;
    rezult = 0;
    
    if (vhod == "BGN")
    {
        if (izhod == "USD")
        {
            rezult = suma / 1.79549;
        }
        else if (izhod == "EUR")
        {
            rezult = suma / 1.95583;
        }
        else if (izhod == "GBP")
        {
            rezult = suma / 2.53405;
        }
    } else if (vhod == "USD"){
        if (izhod == "BGN")
        {
            rezult = suma * 1.79549;
        }
        else if (izhod == "EUR")
        {
            rezult = suma * 1.79549 / 1.95583;
        }
        else if (izhod == "GBP")
        {
            rezult = suma * 1.79549 / 2.53405;
        }
    } else if (vhod == "EUR"){
        if (izhod == "BGN")
        {
            rezult = suma * 1.95583;
        }
        else if (izhod == "USD")
        {
            rezult = suma * 1.95583 / 1.79549;
        }
        else if (izhod == "GBP")
        {
            rezult = suma * 1.95583 / 2.53405;
        }
    } else if (vhod == "GBP"){
        if (izhod == "BGN")
        {
            rezult = suma * 2.53405;
        }
        else if (izhod == "USD")
        {
            rezult = suma * 2.53405 / 1.79549;
        }
        else if (izhod == "EUR")
        {
            rezult = suma * 2.53405 / 1.95583;
        }
    } else {
        
        cout << "Invalid currency selection" << endl;
    }
    
    
    cout << fixed << setprecision(2) << rezult << endl;
    return 0;
}



