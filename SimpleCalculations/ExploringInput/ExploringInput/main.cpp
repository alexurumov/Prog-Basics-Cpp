#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    cout << "Please enter your name: " << endl;
    string name;
    getline (cin, name);
    cout << "Your name is: " << name << endl;
    return 0;
}
