#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    char a;
    str = "*";
    a = str.length();
    while (a < 11){
        cout << str << endl;
        str = str + "*";
        a = str.length();
    }
    
    return 0;
}
