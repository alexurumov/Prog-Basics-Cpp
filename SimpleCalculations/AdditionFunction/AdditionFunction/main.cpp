#include <iostream>
#include <string>

using namespace std;

int addition (int a, int b)
{
    return a + b;
}

int main()
{
    int first_number, second_number;
    cin >> first_number >> second_number;
    cout << addition(first_number, second_number) << endl;
    return 0;
}

