#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    
    int n;
    cin >> n;
    
    int numbers = 0, cap_letters = 0, small_letters = 0, other_chars = 0;
    string nums, c_letters, s_letters, others;
    
    for (int i = 1; i <= n; i++)
    {
        char input;
        cin >> input;
        
        if (int (input) >= 48 && int (input) <= 57)
        {
            numbers += int (input);
            nums += input;
        }
        else if (int (input) >= 65 && int (input) <= 90)
        {
            cap_letters += int (input);
            c_letters += input;
        }
        else if (int (input) >= 97 && int (input) <= 122)
        {
            small_letters += int (input);
            s_letters += input;
        }
        else
        {
            other_chars += int (input);
            others += input;
        }
    }
    
    if (numbers >= small_letters && numbers >= cap_letters && numbers >= other_chars)
        cout << "Biggest ASCII sum is:" << numbers << endl << "Combination of characters is:" << nums << endl;
    
    else if (small_letters > numbers && small_letters > cap_letters && small_letters >= other_chars)
        cout << "Biggest ASCII sum is:" << small_letters << endl << "Combination of characters is:" << s_letters << endl;
    
    else if (cap_letters > numbers && cap_letters >= small_letters && cap_letters >= other_chars)
        cout << "Biggest ASCII sum is:" << cap_letters << endl << "Combination of characters is:" << c_letters << endl;
    
    else if (other_chars > numbers && other_chars > cap_letters && other_chars > small_letters)
        cout << "Biggest ASCII sum is:" << other_chars << endl << "Combination of characters is:" << others << endl;
    
    return 0;
}
