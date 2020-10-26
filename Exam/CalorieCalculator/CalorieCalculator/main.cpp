#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    
    char sex;
    double weight, height, age, calories = 0.0;
    string phys_level;
    
    cin >> sex >> weight >> height >> age;
    
    cin.ignore();
    
    getline(cin, phys_level);
    
    if (sex == 'm')
        calories = 66 + (13.7 * weight) + (5 * 100 * height) - (6.8 * age);
    else if (sex == 'f')
        calories = 655 + (9.6 * weight) + (1.8 * 100 * height) - (4.7 * age);
    
    if (phys_level == "sedentary")
        calories *= 1.2;
    else if (phys_level == "lightly active")
        calories *= 1.375;
    else if (phys_level == "moderately active")
        calories *= 1.55;
    else if (phys_level == "very active")
        calories *= 1.725;
    
    cout << "To maintain your current weight you will need " << ceil(calories) << " calories per day." << endl;
    
    return 0;
}
