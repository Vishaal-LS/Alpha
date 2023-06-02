//Write a program to determine the character entered by the user.
using namespace std;
#include<iostream>
#include<cctype>
void main()
{
	char ch;
	cout << "\n Press any key: ";
	cin >> ch;
	if (isalpha(ch) > 0)
	{
		cout << "\n The user has entered a character\n";
	}
	else if (isdigit(ch) > 0)
	{
		cout << "\n The user has entered a number!\n";
	}
	else if (isprint(ch) > 0)
	{
		cout << "\n The user has entered a printable character!\n";
	}
	else if (isspace(ch) > 0)
	{
		cout << "\n The user has entered a whitespace character!\n";
	}a
	else if (ispunct(ch) > 0)
	{
		cout << "\n The user has entered a punctuation character!\n";aa
	}
}