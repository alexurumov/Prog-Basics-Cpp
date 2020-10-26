#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    string sex;
    int age, xp;
    cin >> sex >> age >> xp;
    
    if (sex == "male")
    {
        if (age >= 64)
        {
            if (xp >= 38)
                cout << "Ready to retire at " << age << " and " << xp << " years of experience!" << endl;
            else
                cout << "Old enough, but haven't worked enough. Work experience left to retirement: " << 38 - xp << "." << endl;
        }
        else
        {
            if (xp >= 38)
                cout << "Worked enough, but not old enough. Years left to retirement: " << 64 - age << "." << endl;
            else
                cout << "Too early. Years left to retirement: " << 64 - age << ". Work experience left to retirement: " << 38 - xp << "." << endl;
        }
        
    }
    else if (sex == "female")
    {
        if (age >= 61)
        {
            if (xp >= 35)
                cout << "Ready to retire at " << age << " and " << xp << " years of experience!" << endl;
            else
                cout << "Old enough, but haven't worked enough. Work experience left to retirement: " << 35 - xp << "." << endl;
        }
        else
        {
            if (xp >= 38)
                cout << "Worked enough, but not old enough. Years left to retirement: " << 61 - age << "." << endl;
            else
                cout << "Too early. Years left to retirement: " << 61 - age << ". Work experience left to retirement: " << 35 - xp << "." << endl;
        }
    }
    else
        cout << "Invalid input." << endl;
    
    return 0;
}
