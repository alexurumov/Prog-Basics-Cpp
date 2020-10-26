#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    
    int n, m, l;
    cin >> n >> m >> l;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            for (int k = 1; k <= l; k++)
            {
                if (i % 2 == 0 && k % 2 == 0 && (j == 2 || j == 3 || j == 5 || j == 7))
                {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }
    
    return 0;
}
