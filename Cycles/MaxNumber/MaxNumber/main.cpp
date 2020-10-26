#include <iostream>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int num;
    cin >> num;
    
    int max_number = num;
    
    for (int i = 0; i < n - 1; i++)
    {
        int current_num;
        cin >> current_num;
        if (current_num > max_number)
        {
            max_number = current_num;
        }
        
    }
    
    cout << max_number << endl;
    
    return 0;
}
