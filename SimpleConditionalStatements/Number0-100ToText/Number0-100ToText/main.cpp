#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;
    string first = "";
    string second = "";
    
    if (number % 10 == 1)
        {
            second = "one";
        }
    else if (number % 10 == 2)
        {
            second = "two";
        }
    else if (number % 10 == 3)
        {
            second = "three";
        }
    else if (number % 10 == 4)
        {
            second = "four";
        }
    else if (number % 10 == 5)
        {
            second = "five";
        }
    else if (number % 10 == 6)
        {
            second = "six";
        }
    else if (number % 10 == 7)
        {
            second = "seven";
        }
    else if (number % 10 == 8)
        {
            second = "eight";
        }
    else if (number % 10 == 9)
        {
            second = "nine";
        }
    else if (number % 10 == 0)
    {
        if (number / 10 == 0)
        {
            second = "zero";
        }
        else if (number / 10 == 1)
        {
            second = "ten";
        }
        else if (number / 10 == 2)
        {
            second = "twenty";
        }
        else if (number / 10 == 3)
        {
            second = "thirty";
        }
        else if (number / 10 == 4)
        {
            second = "fourty";
        }
        else if (number / 10 == 5)
        {
            second = "fifty";
        }
        else if (number / 10 == 6)
        {
            second = "sixty";
        }
        else if (number / 10 == 7)
        {
            second = "seventy";
        }else if (number / 10 == 8)
        {
            second = "eighty";
        }else if (number / 10 == 8)
        {
            second = "ninety";
        }else if (number / 10 == 10)
        {
            second = "one hundred";
        }
    }
        if (number / 10 == 1)
        {
            if (number % 10 == 1)
            {
                second = "eleven";
            }
            else if (number % 10 == 2)
            {
                second = "twelve";
            }
            else if (number % 10 == 3)
            {
                second = "thirteen";
            }
            else if (number % 10 == 4)
            {
                second = "fourteen";
            }
            else if (number % 10 == 5)
            {
                second = "fifteen";
            }
            else if (number % 10 == 6)
            {
                second = "sixteen";
            }
            else if (number % 10 == 7)
            {
                second = "seventeen";
            }
            else if (number % 10 == 8)
            {
                second = "eighteen";
            }
            else if (number % 10 == 9)
            {
                second = "nineteen";
            }
        }
        if (number / 10 == 2)
        {
            first = "twenty";
        }
        else if (number / 10 == 3)
        {
            first = "thirty";
        }
        else if (number / 10 == 4)
        {
            first = "forty";
        }
        else if (number / 10 == 5)
        {
            first = "fifty";
        }
        else if (number / 10 == 6)
        {
            first = "sixty";
        }
        else if (number / 10 == 7)
        {
            first = "seventy";
        }
        else if (number / 10 == 8)
        {
            first = "eighty";
        }
        else if (number / 10 == 9)
        {
            first = "ninety";
        }
    if (first == "" or first == second)
    {
        cout << second << endl;
    }
    else
    {
    cout << first << " " << second << endl;
    }
    return 0;
}

