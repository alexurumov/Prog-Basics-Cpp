#include <iostream>

using namespace std;

int main() {
    
    double ship_width, ship_length, ship_hight, average_height;
    
    cin >> ship_width >> ship_length >> ship_hight >> average_height;
    
    double ship_volume = ship_width * ship_length * ship_hight;
    
    double room_volume = 2 * 2 * (average_height + 0.40);
    
    int result = ship_volume / room_volume;
    
    if (result >= 3.0 && result <= 10)
    {
        cout << "The spacecraft holds " << result << " astronauts." << endl;
    }
    else if (result < 3)
    {
        cout << "The spacecraft is too small." << endl;
    }
    else
    {
        cout << "The spacecraft is too big." << endl;
    }
    
    return 0;
}
