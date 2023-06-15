// Program to read and display n numbers using an array

#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	int i = 0, n, arr[20];//declaration of variables and array
	
	cout << "\n Enter the number of elements of array : ";
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cout << "\n Arr[" << i << "]";
		cin >> arr[i];
	}

	cout << "\n The array elements are : \n";
	
	for (i = 0; i < n; i++)
	{
		cout << "\t Arr[" << i << "]  = " << arr[i] <<"\n";
	}

}

