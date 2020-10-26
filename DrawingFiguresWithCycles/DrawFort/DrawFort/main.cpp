#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    string houses, underbars, spaces;
    
    // first line
    int houses_count = n / 2;
    int underbars_count = n * 2 - houses_count * 2 - 4;
    houses = string(houses_count, '^');
    underbars = string(underbars_count, '_');
    
    cout << "/" << houses << "\\" << underbars << "/" << houses << "\\" << endl;
    
    // body
    spaces = string(n * 2 - 2, ' ');
    
    for (int row = 2; row <= n - 2; row++)
    {
        cout << "|" << spaces << "|" << endl;
    }
    
    // one but last line
    int spaces_count = (n * 2 - 2 - underbars_count) / 2;
    spaces = string(spaces_count, ' ');
    cout << "|" << spaces << underbars << spaces << "|" << endl;
    
    // last line
    int underbars_count_last = houses_count;
    underbars = string(underbars_count_last, '_');
    spaces = string(underbars_count, ' ');
    cout << "\\" << underbars << "/" << spaces << "\\" << underbars << "/" << endl;
    
    return 0;
}
