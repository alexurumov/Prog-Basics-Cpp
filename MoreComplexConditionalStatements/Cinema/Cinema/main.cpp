#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    
    string type;
    double coloumns, rows;
    cin >> type >> rows >> coloumns;
    
    if (type == "Premiere")
    {
        cout << fixed << setprecision(2) << coloumns * rows * 12 << endl;
    }
    else if (type == "Normal")
    {
        cout << fixed << setprecision(2) << coloumns * rows * 7.5 << endl;
    }
    else if (type == "Discount")
    {
        cout << fixed << setprecision(2) << coloumns * rows * 5 << endl;
    }
    
    return 0;
}




