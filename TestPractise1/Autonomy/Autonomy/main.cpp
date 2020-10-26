#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int width, length, height;
    cin >> width >> length >> height;
    
    int volume = width * length * height;
    
    while (true)
    {
        int number;
        cin >> number;
        
        if (cin.fail())
        {
            cout << volume << " Cubic meters left." << endl;
            break;
        }
        
        volume -= number;
        if (volume < 0)
        {
            cout << "No more free space! You need " << abs(volume) << " Cubic meters more." << endl;
            break;
        }
        
    }
    
    return 0;
}

