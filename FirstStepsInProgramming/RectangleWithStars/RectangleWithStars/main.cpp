#include <iostream>

using namespace std;

int main() {
    int n;
    char a, b;
    cin >> n;
    string str;
    b = str.length();
    if (n >= 2 and n <= 100){
    
    str = "*";
    for (a = 1; a < n - 1; a = a + 1){
        str = str + "*";
    }
    str = str + "*";
    cout << str << endl;
    
    for (b = 1; b < n - 1; b = b + 1){
        str = "*";
        for (a = 1; a < n - 1; a = a + 1){
        str = str + " ";
        }
        str = str + "*";
        cout << str << endl;
        }
    
    str = "*";
    for (a = 1; a < n - 1; a = a + 1){
        str = str + "*";
    }
    str = str + "*";
    cout << str << endl;
    } else {
        cout << "The number is out of range\n";
    }
    return 0;
}
