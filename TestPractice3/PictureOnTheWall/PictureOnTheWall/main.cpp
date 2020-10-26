#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    int hole_width, hole_length, paintings_side, paintings_cnt;
    cin >> hole_width >> hole_length >> paintings_side >> paintings_cnt;
    
    int hole_area = hole_width * hole_length;
    int painting_area = paintings_side * paintings_side * paintings_cnt;
    
    if (hole_area >= painting_area)
    {
        cout << "The pictures fit in the hole." << " Hole area is " << hole_area - painting_area << " bigger than pictures area." << endl;
    }
    else
    {
        cout << "The pictures don't fit in the hole." << " Picture area is " << painting_area - hole_area << " bigger than hole area." << endl;
    }
    
    return 0;
}
