#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    int exam_h, exam_m, arrival_h, arrival_m;
    cin >> exam_h >> exam_m >> arrival_h >> arrival_m;
    
    int exam_total = exam_h * 60 + exam_m;
    int arrival_total = arrival_h * 60 + arrival_m;
    int difference = arrival_total - exam_total;
    
    if (difference >= -30 && difference <= 0)
    {
        cout << "On time" << endl;
        if (difference != 0)
        {
            cout << abs(difference) << " minutes before the start" << endl;
        }
    }
    else if (difference > 0)
    {
        cout << "Late" << endl;
        if (difference <= 59)
        {
            cout << difference % 60 << " minutes after the start" << endl;
        }
        else
        {
            cout << difference / 60 << ":" << setfill('0') << setw(2) << difference % 60 << " hours after the start" << endl;
        }
    }
    else
    {
        cout << "Early" << endl;
        if (difference >= -59)
        {
            cout << abs(difference % 60) << " minutes before the start" << endl;
        }
        else
        {
            cout << abs(difference / 60) << ":" << setfill('0') << setw(2) << abs(difference % 60) << " hours before the start" << endl;
        }
    }
    return 0;
}
