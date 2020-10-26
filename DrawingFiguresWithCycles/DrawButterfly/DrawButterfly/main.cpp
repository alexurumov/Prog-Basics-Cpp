#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    string stars, dashes, spaces;
    
    int rows = 2 * (n - 2) + 1;
    int cols = 2 * n - 1;
    int middle = rows / 2 + 1;
    
    
    // first half
    int stars_count = n - 2;
    int dashes_count = n - 2;
    
    stars = string(stars_count, '*');
    dashes = string(dashes_count, '-');
    
    for (int row = 1; row < middle; row++)
    {
        if (row % 2 == 1)
        {
            cout << stars << "\\" << " " << "/" << stars << endl;
        }
        else
        {
            cout << dashes << "\\" << " " << "/" << dashes << endl;
        }
    }
    
    // middle
    int spaces_count = stars_count + 1;
    spaces = string(spaces_count, ' ');
    cout << spaces << "@" << endl;
    
    // last half
    
    for (int row = middle - 1; row >= 1; row--)
    {
        if (row % 2 == 1)
        {
            cout << stars << "/" << " " << "\\" << stars << endl;
        }
        else
        {
            cout << dashes << "/" << " " << "\\" << dashes << endl;
        }
    }
    
    return 0;
}
