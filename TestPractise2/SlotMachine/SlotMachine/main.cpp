#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char n, m, k;
    int n1, m1, k1;
    cin >> n >> n1 >> m >> m1 >> k >> k1;
    
    n = n + n1;
    m = m + m1;
    k = k + k1;
    
    cout << n << m << k << endl;
    
    if (int (n) == 64 && int (m) == 64 && int (k) == 64)
    {
        cout << "!!! YOU LOSE EVERYTHING !!!" << endl;
    }
    
    if (int (n) == 55 && int (m) == 55 && int (k) == 55)
    {
        cout << "*** JACKPOT ***" << endl;
    }
    
    return 0;
}
