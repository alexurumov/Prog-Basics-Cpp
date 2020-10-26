#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    string stars, inner_dashes, outer_dashes;
    
    int stars_count = 1;
    int outer_dashes_count, inner_dashes_count;
    
    if (n % 2 == 0)
    {
        stars_count = 2;
    }
    
    outer_dashes_count = (n - stars_count) / 2;
    outer_dashes = string(outer_dashes_count, '-');
    stars = string(stars_count, '*');
    
    // print first line
    cout << outer_dashes << stars << outer_dashes << endl;
    
    int middle = (n + 1) / 2;
    
    // print first half
    for (int row = 2; row <= middle; row++)
    {
        outer_dashes_count -= 1;
        inner_dashes_count = n - 2 * outer_dashes_count - 2;
        
        inner_dashes = string(inner_dashes_count, '-');
        outer_dashes = string(outer_dashes_count, '-');
        
        cout << outer_dashes << "*" << inner_dashes << "*" << outer_dashes << endl;
    }

    
    // second half
    for (int row = middle - 1; row >= 2; row--)
    {
        outer_dashes_count += 1;
        inner_dashes_count = n - 2 * outer_dashes_count - 2;
        
        inner_dashes = string(inner_dashes_count, '-');
        outer_dashes = string(outer_dashes_count, '-');
        
        cout << outer_dashes << "*" << inner_dashes << "*" << outer_dashes << endl;
    }
    
    // print last line
    if (n > 2)
    {
        outer_dashes_count = (n - stars_count) / 2;
        outer_dashes = string(outer_dashes_count, '-');
        stars = string(stars_count, '*');
        cout << outer_dashes << stars << outer_dashes << endl;
    }
    return 0;
}

// 1) Print first line
// 2) Print body's first half including the middle
// 3) Print body's second half - (reverse for cycle from the middle-1 row until the 2nd before the end
// 4) Print the last line

