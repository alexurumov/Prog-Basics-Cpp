#include <iostream>

using namespace std;

int main() {
    double height, width;
    int row, column, spaces;
    cin >> height >> width;
    row = height / 1.2;
    column = (width - 1) / 0.7;
    spaces = row * column - 3;
    cout << spaces << endl;
    return 0;
}
