#include <iostream>

using namespace std;

int main() {
    
    int m;
    cin >> m;
    
    int password = 0, counter = 0;
    bool password_found = false;
    
    for (int a = 1; a <= 9; a++)
    {
        for (int b = a + 1; b <= 9; b++)
        {
            for (int c = 0; c <= 9; c++)
            {
                for (int d = 1; d < c; d++)
                {
                    if (m == (a * b + c * d))
                    {
                        int current_password = 1000 * a + 100 * b + 10 * c + d;
                        cout << current_password << " ";
                        counter ++;
                        
                        if (counter == 4)
                        {
                            password = current_password;
                            password_found = true;
                        }
                    }
                }
            }
        }
    }
    if (counter != 0)
    {
        cout << endl;
    }
    if (password_found)
    {
    cout << "Password: " << password << endl;
    }
    else
    {
        cout << "No!" << endl;
    }
    
    return 0;
}
