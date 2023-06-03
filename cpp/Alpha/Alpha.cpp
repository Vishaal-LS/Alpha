// Program 3.13 Write a program to calculate roots of a quadratic equation.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b, c;
	float D, deno, root1, root2;
	cout << "\n Enter the values of a, b, c : ";
	cin >> a >> b >> c;
	D = (b * b) - (4 * a * c);
	deno = 2 * a;
	if (D > 0)
	{
		cout << "\n REAL ROOTS";
		root1 = (-b + sqrt(D)) / deno;
		root2 = (-b - sqrt(D)) / deno;
		cout << "\n ROOT1 = " << root1 << "\t ROOT2 = " << root2;
	}
	else if (D == 0)
	{
		cout << "\n EQUAL ROOTS";
		root1 = -b / deno;
		cout << "\n ROOT1 = " << root1;
	}
	else
	{
		cout << "\n IMAGINARY ROOTS";
	}
	return 0;
}