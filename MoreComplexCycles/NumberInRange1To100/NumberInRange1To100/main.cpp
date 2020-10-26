#include <iostream>

using namespace std;

int main() {
    
    int n;
    cout << "Enter a number in the range [1...100]: ";
    cin >> n;
    
    while (n < 1 || n > 100)
    {
        cout << "Invalid number!" << endl;
        cout << "Enter a number in the range [1...100]: ";
        cin >> n;
    }
    cout << "The number is: " << n << endl;
    
    
    return 0;
}
