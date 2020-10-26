#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    char a;
    str = "*";
    a = str.length();
    for (str = "*"; a < 11; a = a + 1){
        cout << str << endl;
        str = str + "*";
    }

    return 0;
}


