#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string product;
    cin >> product;
    
    if (product == "banana" or product == "apple" or product == "kiwi" or product == "cherry" or product == "lemon" or product == "grapes")
    {
        cout << "fruit" << endl;
    }
    else if (product == "tomato" or product == "cucumber" or product == "pepper" or product == "carrot")
    {
        cout << "vegetable" << endl;
    }
    else
    {
        cout << "unknown" << endl;
    }
    
    return 0;
}



