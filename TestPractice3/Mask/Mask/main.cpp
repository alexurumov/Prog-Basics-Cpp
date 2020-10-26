#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int width = 2 * n + 2;
    
    //top
    string spaces_left, spaces_right;
    
    int spaces_right_cnt = 0, spaces_left_cnt = (width - spaces_right_cnt - 6) / 2;
    
    for (int i = 1; i <= n - 1; i++)
    {
        spaces_right = string(spaces_right_cnt, ' ');
        spaces_left = string(spaces_left_cnt, ' ');
        cout << spaces_left << "/" << spaces_right << "|  |" << spaces_right << "\\" << endl;
        spaces_left_cnt--;
        spaces_right_cnt++;
    }
    
    string dashes = string(width, '-');
    
    cout << dashes << endl;
    
    //body
    
    string spaces = string(n + 1, ' ');
    string small_spaces = string((width - (n + 1) - 4) / 2, ' ');
    cout << "|" << small_spaces << "_" << spaces << "_" << small_spaces <<  "|" << endl;
    
    cout << "|" << small_spaces << "@" << spaces << "@" << small_spaces <<  "|" << endl;
    
    for (int i = 1; i <= (n - 1) /2; i++)
    {
        spaces = string(width - 2, ' ');
        cout << "|" << spaces << "|" << endl;
    }
    
    spaces = string((width - 4) / 2, ' ');
    cout << "|" << spaces << "OO" << spaces << "|" << endl;
    
    spaces = string((width - 6) / 2, ' ');
    cout << "|" << spaces << "/  \\" << spaces << "|" << endl;
    cout << "|" << spaces << "||||" << spaces << "|" << endl;
    
    //bottom
    
    for (int i = 1; i <= n + 1; i++)
    {
        string slashes_left = string(i, '\\');
        string slashes_right = string(i, '/');
        string comas = string(width - i * 2, '`');
        cout << slashes_left << comas << slashes_right << endl;
    }
    
    return 0;
}
