// Program to interchange large and small number in array

#include<iostream>

int main()
{
    int i, n, arr[20], temp;
    int small, small_pos = 0, large, large_pos = 0;

    std::cout << "********Program to interchange large and small number in array************\n\n";

    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    small = large = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
            small_pos = i;
        }
        if (arr[i] > large)
        {
            large = arr[i];
            large_pos = i;
        }
    }
    std::cout << "The smallest number is: " << small << "\n";
    std::cout << "The position of the smallest number in the array is: " << small_pos + 1 << "\n";

    std::cout << "The largest number is: " << large << "\n";
    std::cout << "The position of the largest number in the array is: " << large_pos + 1 << "\n";

    temp = arr[large_pos];
    arr[large_pos] = arr[small_pos];
    arr[small_pos] = temp;

    std::cout << "\nThe new array is: ";
    for (i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n\n****************************************************\n";
}



/*
Pesudocode:

1. Variable Declaration of i , n, arr[20], temp, small, small_pos, large, large_pos.

2. print "Enter the number of elements in the array : " and read value of n.

3. print "Enter the elements of the array : ", 
	a)initiate a forloop where i is 0 and ALA i < n , i gets incremented.
	b)read value of arr[i]

4. declare small = large = arr[0].

5. initiate forloop for i where i =0, and if i is smaller than  n , i gets incremented
	a) if arr[i] is smaller than "small", small = arr[i] and small_pos = 1.
	b) if arr[i] is larger than "large", large = arr[i] and large_pos = 1.
====
6. print "The smallest number of these numbers is : " 
	a) "small".

7. print "The position of the smallest number in the array is : ".
	a) "small_pos".

8. print "The largest of these numbers is : " 
	a) "large"

9. print "The position of the largest number in the array is : "
	a) large_pos
======
10. assign temp to arr[large_pos] and make arr[large_pos] = arr[small_pos] and assign arr[small_pos] to temp

11. print "The new array is : "
	a)forloop where i = 0 and as long as i is less than n, i is incremented.
	b)print arr[i]

*/