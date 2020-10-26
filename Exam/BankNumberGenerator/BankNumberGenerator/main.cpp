#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    
    int a, e, n;
    char b, c, d;
    
    cin >> a >> b >> c >> d >> e >> n;
    
    int counter = 0;
    
    for (int one = a; one <= 99; one++)
    {
        for (char two = b; two <= 'Z'; two++)
        {
            for (char three = c; three <= 'z'; three++)
            {
                for (char four = d; four <= 'Z'; four++)
                {
                    for (int five = e; five >= 10; five--)
                    {
                        if ((one % 10 == 2) && (five % 10 == 5))
                        {
                            counter++;
                            
                            if (counter == n)
                            {
                                cout << one << two << three << four << five << endl;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}
