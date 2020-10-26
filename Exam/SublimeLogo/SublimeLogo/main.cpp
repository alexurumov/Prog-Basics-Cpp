#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    string spaces, stars;
    
    int spaces_cnt = 0, stars_cnt = 0;
    
    int width = 2 * n;
    
    // first
    
    for (int i = 1; i <= n; i++)
    {
        stars_cnt = i * 2;
        spaces_cnt = width - stars_cnt;
        spaces = string(spaces_cnt, ' ');
        stars = string(stars_cnt, '*');
        cout << spaces << stars << endl;
    }
    
    // second
    
    for (int i = width - 2; i >= n * 2 - 4; i -= 2)
    {
        stars_cnt = i;
        spaces_cnt = width - stars_cnt;
        stars = string(stars_cnt, '*');
        spaces = string(spaces_cnt, ' ');
        cout << stars << spaces << endl;
    }
    
    // third
    
    stars_cnt = width - 2;
    spaces_cnt = width - stars_cnt;
    stars = string(stars_cnt, '*');
    spaces = string(spaces_cnt, ' ');
    cout << stars << spaces << endl;
    
    // fourth
    
    for (int i = width; i >= n * 2 - 4; i -= 2)
    {
        stars_cnt = i;
        spaces_cnt = width - stars_cnt;
        stars = string(stars_cnt, '*');
        spaces = string(spaces_cnt, ' ');
        cout << spaces << stars << endl;
    }
    
    // fifth
    
    stars_cnt = width - 2;
    spaces_cnt = width - stars_cnt;
    stars = string(stars_cnt, '*');
    spaces = string(spaces_cnt, ' ');
    cout << spaces << stars << endl;
    
    // last
    
    for (int i = width; i >= 1; i -= 2)
    {
        stars_cnt = i;
        spaces_cnt = width - stars_cnt;
        spaces = string(spaces_cnt, ' ');
        stars = string(stars_cnt, '*');
        cout << stars << spaces << endl;
    }
    
    return 0;
}
