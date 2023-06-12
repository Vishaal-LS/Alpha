// C++ program to convert seconds
// into days, hours,minutes,seconds
#include <iostream>
using namespace std;

// function convert second into day
// hours, minutes and seconds
void ConvertSectoDay(int n)
{
	int day = n / (24 * 3600);

	n = n % (24 * 3600);
	int hour = n / 3600;

	n %= 3600;
	int minutes = n / 60 ;

	n %= 60;
	int seconds = n;
	
	cout << day << " " << "days " << hour
		<< " " << "hours " << minutes << " "
		<< "minutes " << seconds << " "
		<< "seconds " << endl;
}

// Driver code
int main()
{
	// Given n is in seconds
	int n = 129600;
	ConvertSectoDay(n);
	return 0;
}
