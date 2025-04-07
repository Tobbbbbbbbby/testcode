//
// Created by 34779 on 2025/4/7.
//
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int random_number = rand()%100 + 1;
    int i = 1;
    int count =7;
    int input_number = 0;

    while(i<2)
    {
        cout << " Please input a number ";
        cin >> input_number;

        if(input_number < random_number)
        {
            cout << " too low, please try again " << endl;
            count --;
            cout << " now you have " << count << " chances " << endl;
        }

        else if(input_number > random_number)
        {
            cout << " too high, please try again " << endl;
            count --;
            cout << " now you have " << count << " chances " << endl;
        }

        else
        {
            cout << " You guess the number! " << endl;
            break;
        }

        if(count == 0)
        {
            cout << "Try again next time: " << endl;
            break;
        }
    }

    return 0;
}