#include <iostream>

using namespace std;

int main() {
    
    int one_lev_count, two_levs_count, five_levs_count, sum;
    cin >> one_lev_count >> two_levs_count >> five_levs_count >> sum;
    
    for (int one_lev = 0; one_lev <= one_lev_count; one_lev++)
    {
        for (int two_levs = 0; two_levs <= two_levs_count; two_levs++)
        {
            for (int five_levs = 0; five_levs <= five_levs_count; five_levs++)
            {
                if (one_lev + 2 * two_levs + 5 * five_levs == sum)
                {
                printf("%d * 1 lv. + %d * 2 lv. + %d * 5 lv. = %d lv. \n", one_lev, two_levs, five_levs, sum);
                }
            }
        }
    }
    
    return 0;
}
