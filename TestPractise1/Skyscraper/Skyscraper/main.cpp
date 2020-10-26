#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    string spaces, pipes, underbars, dashes, stars;
    
    // first top
    if (n > 3)
    {
        for (int i = 1; i <= n - 3; i++)
        {
            int spaces_count = n;
            spaces = string(spaces_count, ' ');
            cout << spaces << "|" << endl;
        }
    }
    int spaces_count = n - 1;
    spaces = string(spaces_count, ' ');
    
    cout << spaces << "_|_" << endl;
    
    // second top
    if (n > 3)
    {
        for (int i = 1; i <= n - 3; i++)
        {
            spaces_count = n - 1;
            spaces = string(spaces_count, ' ');
            cout << spaces << "|-|" << endl;
        }
    }
    spaces_count = n - 2;
    spaces = string(spaces_count, ' ');
    cout << spaces << "_|-|_" << endl;
    
    // third top
    spaces_count = n - 2;
    spaces = string(spaces_count, ' ');
        for (int i = 1; i <= n - 3; i++)
        {
            cout << spaces << "|***|" << endl;
        }
    
    if (n > 3)
    {
        spaces_count = 1;
        spaces = string(spaces_count, ' ');
        int underbars_count = (n * 2 + 1 - 5 - 2 * spaces_count) / 2;
        underbars = string(underbars_count, '_');
        cout << spaces << underbars << "|***|" << underbars << endl;
    }
    // body
    // 4 * n - 1
    // 3  4  5  6  7  8
    // 11 15 19 23 27 31
    
    spaces_count = 1;
    int pipes_count = n - 2;
    spaces = string(spaces_count, ' ');
    pipes = string(pipes_count, '|');
    
    for (int i = 1; i <= 4 * n - 1; i++)
    {
        
        cout << spaces << pipes << "---" << pipes << endl;
    }
    
    cout << "_" << pipes << "---" << pipes << "_" << endl;
    // floor
    for (int i = 1; i <= n - 2; i++)
    {
        pipes_count = n * 2 + 1;
        pipes = string(pipes_count, '|');
        cout << pipes << endl;
    }
    return 0;
}

