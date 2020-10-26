#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    
    int first_begin, second_begin, first_dif, second_dif;
    cin >> first_begin >> second_begin >> first_dif >> second_dif;
    
    int first_end = first_begin + first_dif;
    int second_end = second_begin + second_dif;
    
    for (int i = first_begin; i <= first_end; i++)
    {
        for (int j = second_begin; j <= second_end; j++)
        {
            bool first_is_prime = true;
            bool second_is_prime = true;
            
            for (int k = 2; k <= sqrt(i); k++)
            {
                if (i % k == 0)
                {
                    first_is_prime = false;
                    break;
                }
            }
            for (int k = 2; k <= sqrt(j); k++)
            {
                if (j % k == 0)
                {
                    second_is_prime = false;
                    break;
                }
            }
            
            if (first_is_prime && second_is_prime)
            {
                cout << i << j << endl;
            }
        }
    }
    
    return 0;
}
