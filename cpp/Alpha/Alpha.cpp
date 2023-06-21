// Program to check 
#include <iostream>
using namespace std;

bool isPrime(int num)
{
	for (int i = 2; i < sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int a, b;
	cout << " ENter values of A and B :";
	cin >> a >> b;

	for (int i = a; i <= b; i++)
	{
		if (isPrime(i) == true)
		{
			cout << i << "\n";
		}
	}
 }