#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    
    double budget;
    char sex;
    int age;
    string sport;
    
    cin >> budget >> sex >> age >> sport;
    
    double cost = 0;
    
    if (sex == 'm')
    {
        if (sport == "Gym")
            cost = 42;
        else if (sport == "Boxing")
            cost = 41;
        else if (sport == "Yoga")
            cost = 45;
        else if (sport == "Zumba")
            cost = 34;
        else if (sport == "Dances")
            cost = 51;
        else if (sport == "Pilates")
            cost = 39;
    }
    else if (sex == 'f')
    {
        if (sport == "Gym")
            cost = 35;
        else if (sport == "Boxing")
            cost = 37;
        else if (sport == "Yoga")
            cost = 42;
        else if (sport == "Zumba")
            cost = 31;
        else if (sport == "Dances")
            cost = 53;
        else if (sport == "Pilates")
            cost = 37;
    }
    
    if (age <= 19)
        cost *= 0.8;
    
    if (budget >= cost)
        cout << "You purchased a 1 month pass for "<< sport << "." << endl;
    else
        cout << "You don't have enough money! You need $" << fixed << setprecision(2) << cost - budget << " more." << endl;
    
    return 0;
}
