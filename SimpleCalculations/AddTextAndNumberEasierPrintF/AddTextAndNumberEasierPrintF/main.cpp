#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first_name, last_name;
    int age;
    cin >> first_name >> last_name >> age;
    
    printf("%s %s %d", first_name.c_str(), last_name.c_str(), age);
    
    return 0;
}




