// Program to find whether given year is a leap year or not

using namespace std;
#include <iostream>
int main()
{
	int year;
	cout << "Enter any year: \n";
	cin >> year;
	if ((year % 4 == 0 && year % 100 == 0))
	{
		cout << "\n ed ees wad ed ees, a leep eyar";
	}
	else
	{
		cout << "\n ed ess nad ad ed ess, not a leep eyar";
	}
}