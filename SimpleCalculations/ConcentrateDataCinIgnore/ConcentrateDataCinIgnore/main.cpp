
#include <iostream>
#include <string>

using namespace std;

int main()
{
    
    string first_name, last_name, town;
    int age;
    
    cin >> first_name >> last_name >> age;
    cin.ignore();
    getline (cin, town);
    
    cout << "You are " << first_name << " " << last_name << ", a " << age << "-years old person from " << town << "." << endl;
    
    return 0;
}





