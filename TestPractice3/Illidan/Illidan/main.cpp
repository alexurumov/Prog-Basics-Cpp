#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    int people, strenght, blood;
    cin >> people >> strenght >> blood;
    
    if (people * strenght < blood)
        cout << "You are not prepared! You need " << blood - people * strenght << " more points." << endl;
    else
        cout << "Illidan has been slain! You defeated him with " << people * strenght - blood << " points." << endl;
    return 0;
}
