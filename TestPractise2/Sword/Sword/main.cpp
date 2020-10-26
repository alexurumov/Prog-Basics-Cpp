#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    
    int n;
    cin >> n;
    
    string hashtags, spaces, equals, dots;
    
    int width = 2 * n + 1;
    
    // top
    int hashtags_count = n - 1;
    hashtags = string(hashtags_count, '#');
    cout << hashtags << "/^\\" << hashtags << endl;
    
    for (int i = 0; i < n / 2; i++)
    {
        int spaces_count = 3 + 2 * i;
        hashtags_count = (width - 2 - spaces_count) / 2;
        spaces = string(spaces_count, ' ');
        hashtags = string(hashtags_count, '#');
        cout << hashtags << "." << spaces << "." << hashtags << endl;
    }

    // body
    hashtags_count = (n - 1) / 2;
    int spaces_count = (width - 2 * hashtags_count - 3) / 2;
    hashtags = string(hashtags_count, '#');
    spaces = string(spaces_count, ' ');
    
    cout << hashtags << "|" << spaces << "S" << spaces << "|" << hashtags << endl;
    cout << hashtags << "|" << spaces << "O" << spaces << "|" << hashtags << endl;
    cout << hashtags << "|" << spaces << "F" << spaces << "|" << hashtags << endl;
    cout << hashtags << "|" << spaces << "T" << spaces << "|" << hashtags << endl;
    
    if (n == 4)
    {
        cout << hashtags << "|" << spaces << " " << spaces << "|" << hashtags << endl;
    }
    
    for (int i = 1; i <= n - 4; i++)
    {
        cout << hashtags << "|" << spaces << " " << spaces << "|" << hashtags << endl;
    }
    
    cout << hashtags << "|" << spaces << "U" << spaces << "|" << hashtags << endl;
    cout << hashtags << "|" << spaces << "N" << spaces << "|" << hashtags << endl;
    cout << hashtags << "|" << spaces << "I" << spaces << "|" << hashtags << endl;

    // bottom
    
    int equals_count = width - 2;
    equals = string(equals_count, '=');
    
    cout << "@" << equals << "@" << endl;
    
    for (int i = 1; i <= n / 2; i++)
    {
        hashtags_count = (n + 3) / 2;
        hashtags = string(hashtags_count, '#');
        spaces_count = width - hashtags_count * 2 - 2;
        spaces = string(spaces_count, ' ');
        cout << hashtags << "|" << spaces << "|" << hashtags << endl;
    }
    hashtags_count = (n + 3) / 2;
    hashtags = string(hashtags_count, '#');
    int dots_count = width - hashtags_count * 2 - 2;
    dots = string(dots_count, '.');
    cout << hashtags << "\\" << dots << "/" << hashtags << endl;
    
    return 0;
}
