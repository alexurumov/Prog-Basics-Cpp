#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    int sum = 0;
    int product = 0;
    
    // sum
    
    for (int a = 1; a <= 30; a++)
    {
        for (int b = 1; b <= 30; b++)
        {
            for (int c = 1; c <= 30; c++)
            {
                if ((n == a + b + c) && c > a && c > b && b > a)
                {
                    cout << a << " + " << b << " + " << c << " = " << n << endl;
                    sum++;
                }
                if ((n == a * b * c) && a > b && a > c && b > c)
                {
                    cout << a << " * " << b << " * " << c << " = " << n << endl;
                    product++;
                }
            }
        }
    }
    if (sum == 0 && product == 0)
    {
        cout << "No!" << endl;
    }
    
    
    return 0;
}

