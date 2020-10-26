#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    double p1 = 0;
    double p2 = 0;
    double p3 = 0;
    double p4 = 0;
    double p5 = 0;
    
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        
        if (number < 200)
        {
            p1++;
        }
        else if (number >= 200 && number < 400)
        {
            p2++;
        }
        else if (number >= 400 && number < 600)
        {
            p3++;
        }
        else if (number >= 600 && number < 800)
        {
            p4++;
        }
        else if (number >= 800)
        {
            p5++;
        }
    }
    
    cout << fixed << setprecision(2) << p1 / n * 100 << "%" << endl << fixed << setprecision(2) << p2 / n * 100 << "%" << endl << fixed << setprecision(2) << p3 / n * 100 << "%" << endl << fixed << setprecision(2) << p4 / n * 100 << "%" << endl << fixed << setprecision(2) << p5 / n * 100 << "%" << endl;
    
    return 0;
}
