//WAP to insert number in given location of array
/*
PesudoCode: 

1. declare i, n, num, pos, arr[10] as int

2. print "\n Enter the number of elements in the array : \n" and read n

3. print "\n Enter the elements : \n" and start forloop where i = 0 , ALA i is less than n, increment i.
	a)read arr[i]

4. print "\n Enter the number to be inserted : "
	a)read num

5. print \n Enter the position at which the number has to be added : "
	a)read pos

6. forloop where i = n, ALA i greater or equal to pos, decrement i
	a)arr[i+1] = arr[i]
	b)arr[pos] = num;

7. print "\n The array after insertion is" num "is : "
	a)initialize forloop where i = 0, ALA i smaller than n+1, increment i
	b)print "\n Arr[:"<< i << "] = " << arr[i]"

*/
#include <iostream>

int main()
{
    int i, n, num, pos, arr[10];

    std::cout << "\n Enter the number of elements in the array: ";
    std::cin >> n;

    std::cout << "\n Enter the elements: ";
    for (i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Enter the number to be inserted: ";
    std::cin >> num;

    std::cout << "Enter the position at which the number has to be added: ";
    std::cin >> pos;

    for (i = n; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = num;

    std::cout << "The array after inserting " << num << " is: ";
    for (i = 0; i < n + 1; i++)
    {
        std::cout << "Arr[" << i << "] = " << arr[i] << " ";
    }

    return 0;
}
