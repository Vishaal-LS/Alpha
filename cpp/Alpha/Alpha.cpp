// prorgam to find largest of n numbers using arrays

#include <iostream>
#include<stdlib.h>


int main()
{
	int arr[50], i, large, n;
	
	std::cout << "Enter the number of elements in the array :- \n";
	std::cin >> n;
	
	std::cout << "Enter the elements of Array : \n";

	for (i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	large = arr[0];
	for (i = 1; i < n; i++)
	{
		if (arr[i] > large)
			large = arr[i]	
	}
	std::cout << "\n The Largest number is : " << large;
}

/*
1. Delcare an array "arr" of size 50.

2. Declare variables 'i', 'large', 'n', which represent loop counter, largest number and the number of elements respectively.

3. print "Enter the number of elements in the array : ".

4. read values of 'n' from the user.

5. print "Enter the elements of Array : ".

6. start a forloop from 0 to n-1 as long as i is smaller than n, i gets incremented and value of 'i' is read for the array elements.

7. set 'large' to first element of array.

8. start a forloop from 1 to n-1 as long as i < n, i gets incremented, check if 'arr[i]' is greater than 'large', assign large to arr[i].

9. Print "The largest number is : " into largest number.
*/