#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    bool prime = true;
    
    if (n >= 2)
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
            cout << "Prime" << endl;
        else
            cout << "Not prime" << endl;
        
    }
    else
        cout << "Not prime" << endl;
    
    
    return 0;
}
