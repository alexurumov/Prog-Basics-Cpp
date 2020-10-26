#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int total_points = 0, red_balls = 0, orange_balls = 0, yellow_balls = 0, white_balls = 0, black_balls = 0, other_balls = 0;
    
    for (int i = 1; i <= n; i++)
    {
        string colour;
        cin >> colour;
        
        if (colour == "red")
        {
            total_points += 5;
            red_balls += 1;
        }
        else if (colour == "orange")
        {
            total_points += 10;
            orange_balls += 1;
        }
        else if (colour == "yellow")
        {
            total_points += 15;
            yellow_balls += 1;
        }
        else if (colour == "white")
        {
            total_points += 20;
            white_balls += 1;
        }
        else if (colour == "black")
        {
            total_points /= 2;
            black_balls += 1;
        }
        else
        {
            other_balls += 1;

        }
    }
    cout << "Total points: " << total_points << endl;
    cout << "Points from red balls: " << red_balls << endl;
    cout << "Points from orange balls: " << orange_balls << endl;
    cout << "Points from yellow balls: " << yellow_balls << endl;
    cout << "Points from white balls: " << white_balls << endl;
    cout << "Other colors picked: " << other_balls << endl;
    cout << "Divides from black balls: " << black_balls << endl;
    
    return 0;
}
