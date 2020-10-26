#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    double odd_sum = 0;
    double even_sum = 0;
    double odd_max = -1000000.0;
    double odd_min = 1000000.0;
    double even_max = -1000000.0;
    double even_min = 1000000.0;
    
    for (int i = 1; i <= n; i++)
    {
        double current_number;
        cin >> current_number;
        if (i % 2 == 1)
        {
            odd_sum += current_number;
            
            if (current_number > odd_max)
            {
                odd_max = current_number;
            }
            
            if (current_number < odd_min)
            {
                odd_min = current_number;
            }
        }
        else if (i % 2 == 0)
        {
            even_sum += current_number;
            
            if (current_number > even_max)
            {
                even_max = current_number;
            }
            if (current_number < even_min)
            {
                even_min = current_number;
            }
        }
    }
 
    switch (n) {
        case 0:
            cout << "OddSum=" << odd_sum << ", " << "OddMin=" << "No" << ", " << "OddMax=" << "No" << ", " << "EvenSum=" << even_sum << ", " << "EvenMin=" << "No" << ", " << "EvenMax=" << "No" << endl;
            break;
            
        case 1:
            cout << "OddSum=" << odd_sum << ", " << "OddMin=" << odd_min << ", " << "OddMax=" << odd_max << ", " << "EvenSum=" << even_sum << ", " << "EvenMin=" << "No" << ", " << "EvenMax=" << "No" << endl;
            break;
            
        default:
            cout << "OddSum=" << odd_sum << ", " << "OddMin=" << odd_min << ", " << "OddMax=" << odd_max << ", " << "EvenSum=" << even_sum << ", "  << "EvenMin=" << even_min << ", " << "EvenMax=" << even_max << endl;
            break;
    }
    return 0;
}


//if (n == 0)
//{
//    cout << "OddSum=" << odd_sum << "," << endl;
//    cout << "OddMin=" << "No" << "," << endl;
//    cout << "OddMax=" << "No" << "," << endl;
//    cout << "EvenSum=" << even_sum << "," << endl;
//    cout << "EvenMin=" << "No" << "," << endl;
//    cout << "EvenMax=" << "No" << endl;
//    }
//    else if (n == 1)
//    {
//        cout << "OddSum=" << odd_sum << "," << endl;
//        cout << "OddMin=" << odd_min << "," << endl;
//        cout << "OddMax=" << odd_max << "," << endl;
//        cout << "EvenSum=" << even_sum << "," << endl;
//        cout << "EvenMin=" << "No" << "," << endl;
//        cout << "EvenMax=" << "No" << endl;
//    }
//    else
//    {
//        cout << "OddSum=" << odd_sum << "," << endl;
//        cout << "OddMin=" << odd_min << "," << endl;
//        cout << "OddMax=" << odd_max << "," << endl;
//        cout << "EvenSum=" << even_sum << "," << endl;
//        cout << "EvenMin=" << even_min << "," << endl;
//        cout << "EvenMax=" << even_max << endl;
//        }
