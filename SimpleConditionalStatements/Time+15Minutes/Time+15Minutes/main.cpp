#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int hours, minutes;
    cin >> hours >> minutes;
    int hours_new, minutes_new;
    minutes_new = minutes + 15;
    hours_new = hours;
    if (minutes_new > 59)
    {
        hours_new = hours + 1;
        minutes_new = minutes_new - 60;
    }
    if (hours_new > 23)
    {
        hours_new = hours_new - 24;
    }
    if (minutes_new / 10 == 0)
    {
        cout << hours_new << ":0" << minutes_new << endl;
    }
    else
    {
        cout << hours_new << ":" << minutes_new << endl;
    }
    return 0;
}

