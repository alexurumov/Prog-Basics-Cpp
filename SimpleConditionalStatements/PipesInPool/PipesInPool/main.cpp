#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    long int obem;
    int debit1, debit2;
    double time, total;
    cin >> obem >> debit1 >> debit2 >> time;
    total = debit1 * time + debit2 * time;
    
    if (total <= obem)
    {
        int procent_total = total / obem * 100;
        int procent1 = debit1 * time / total * 100;
        int procent2 = debit2 * time / total * 100;
        cout << "The pool is " << procent_total << "% full. Pipe 1: " << procent1 << "%. Pipe 2: " << procent2 << "%." << endl;
    }
    else if (total > obem)
    {
        cout << "For " << time << " hours the pool overflows with " << fixed << setprecision(1) << total - obem << " liters." << endl;
    }
    
    return 0;
}

