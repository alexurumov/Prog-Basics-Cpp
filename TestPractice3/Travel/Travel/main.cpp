#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    double distance, speed_truck, speed_dif;
    cin >> distance >> speed_truck >> speed_dif;
    
    double speed_car = speed_truck + speed_dif * 3.6;
    
    double time_truck = distance / speed_truck;
    
    double time_car = distance / speed_car;
    
    cout << "The truck arrived after " << ceil(time_truck) << " hours" << endl;
    cout << "The car arrived after " << ceil(time_car) << " hours" << endl;
    
    return 0;
}
