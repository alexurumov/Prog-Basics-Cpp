#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    
    int n, time;
    
    double distance = 0.0;
    string measurement;
    
    cin >> n;
    
    double total_distance = 0.0;
    int total_mins = 0;
    int calories = 0;
    
    for (int i = 1; i <= n; i++)
    {
        cin >> time >> distance >> measurement;
        
        calories += (time / 20.0) * 400;
        total_mins += time;
        
        if (measurement == "m")
            total_distance += distance / 1000;
        else if (measurement == "km")
            total_distance += distance;
    }
    
    cout << "He ran " << fixed << setprecision(2) << total_distance << "km for " << total_mins << " minutes and burned " << calories << " calories." << endl;
    
    return 0;
}
