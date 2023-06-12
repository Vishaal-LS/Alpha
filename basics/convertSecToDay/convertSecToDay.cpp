#include <iostream>
#include 
using namespace std;

int ConvertSecToDay(int n)
{

    int day, hour, minute, second;

    day = n/(24*3600);//1 day has (24 * 3600) seconds.
    hour = n/3600;    //1 hour has 3600 seconds.
    minute = n/60;   //1 minute has 60 seconds.
    second = n;      //1 second = n.

    cout << "Enter days, hours, minutes, seconds in the respective order";
    cin >> day >> hour >> minute >> second;
}

int main()
{
    int input_number;
    cout << "Enter the number of seconds to convert : \n";
    cin >> input_number;
    ConvertSecToDay(input_number);
    return 0;
}
