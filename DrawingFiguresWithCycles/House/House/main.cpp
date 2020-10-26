#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    string stars, dashes;
    
    int roof_rows = (n + 1) / 2;
    int stars_count = 1, dashes_count;
    
    if (n % 2 == 0)
    {
        stars_count = 2;
    }
    
    // print the roof
    for (int rows = 1; rows <= roof_rows; rows++)
    {
        dashes_count = (n - stars_count) / 2;
        stars = string(stars_count, '*');
        dashes = string(dashes_count, '-');
        cout << dashes << stars << dashes << endl;
        stars_count += 2;
    }
    
    // print the body
    for (int rows = 1; rows <= n - roof_rows; rows++)
    {
        cout << "|" << string(n - 2, '*') << "|" << endl;
    }
    
    return 0;
}

