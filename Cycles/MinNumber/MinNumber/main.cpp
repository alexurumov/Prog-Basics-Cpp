#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int min_number = INT_MAX;
    
    for (int i = 0; i < n; i++)
    {
        int current_num;
        cin >> current_num;
        if (current_num < min_number)
        {
            min_number = current_num;
        }
        
    }
    
    cout << min_number << endl;
    
    return 0;
}
