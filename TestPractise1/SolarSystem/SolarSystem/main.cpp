#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    string planet;
    int days;
    cin >> planet >> days;
    
    double distance = 0.0;
    double total_days = 0.0;
    
    if (planet == "Mercury")
    {
        if (days <= 7)
        {
            distance = 2 * 0.61;
            total_days = distance * 226 + days;
            cout << "Distance: " << fixed << setprecision(2) << distance << endl << "Total number of days: " << fixed << setprecision(2) << total_days << endl;
        }
        else
        {
            cout << "Invalid number of days!" << endl;
        }
    }
    else if (planet == "Venus")
    {
        if (days <= 14)
        {
            distance = 2 * 0.28;
            total_days = distance * 226 + days;
            cout << "Distance: " << fixed << setprecision(2) << distance << endl << "Total number of days: " << fixed << setprecision(2) << total_days << endl;
        }
        else
        {
            cout << "Invalid number of days!" << endl;
        }
    }
    else if (planet == "Mars")
    {
        if (days <= 20)
        {
            distance = 2 * 0.52;
            total_days = distance * 226 + days;
            cout << "Distance: " << fixed << setprecision(2) << distance << endl << "Total number of days: " << fixed << setprecision(2) << total_days << endl;
        }
        else
        {
            cout << "Invalid number of days!" << endl;
        }
    }
    else if (planet == "Jupiter")
    {
        if (days <= 5)
        {
            distance = 2 * 4.2;
            total_days = distance * 226 + days;
            cout << "Distance: " << fixed << setprecision(2) << distance << endl << "Total number of days: " << fixed << setprecision(2) << total_days << endl;
        }
        else
        {
            cout << "Invalid number of days!" << endl;
        }
    }
    else if (planet == "Saturn")
    {
        if (days <= 3)
        {
            distance = 2 * 8.52;
            total_days = distance * 226 + days;
            cout << "Distance: " << fixed << setprecision(2) << distance << endl << "Total number of days: " << fixed << setprecision(2) << total_days << endl;
        }
        else
        {
            cout << "Invalid number of days!" << endl;
        }
    }
    else if (planet == "Uranus")
    {
        if (days <= 3)
        {
            distance = 2 * 18.21;
            total_days = distance * 226 + days;
            cout << "Distance: " << fixed << setprecision(2) << distance << endl << "Total number of days: " << fixed << setprecision(2) << total_days << endl;
        }
        else
        {
            cout << "Invalid number of days!" << endl;
        }
    }
    else if (planet == "Neptune")
    {
        if (days <= 2)
        {
            distance = 2 * 29.09;
            total_days = distance * 226 + days;
            cout << "Distance: " << fixed << setprecision(2) << distance << endl << "Total number of days: " << fixed << setprecision(2) << total_days << endl;
        }
        else
        {
            cout << "Invalid number of days!" << endl;
        }
    }
    else
    {
        cout << "Invalid planet name!" << endl;
    }
    
    return 0;
}

