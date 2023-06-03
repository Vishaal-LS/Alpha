// Program 3.13 Write coefficient_a program to calculate roots of coefficient_a quadratic equation.
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float coefficient_a, coefficient_b, coefficient_c, realpart, imaginarypart;
	float Discriminant, denominator, root1, root2;

	cout << "\n Enter the values of coefficient_a, coefficient_b, coefficient_c : " << endl;
	cin >> coefficient_a >> coefficient_b >> coefficient_c;
	
	Discriminant = pow(coefficient_b, 2) - (4 * coefficient_a * coefficient_c);
	denominator = 2 * coefficient_a;
	
	if (Discriminant > 0)
	{
		cout << "REAL ROOTS"<<endl;
		root1 = (-coefficient_b + sqrt(Discriminant)) / denominator;
		root2 = (-coefficient_b - sqrt(Discriminant)) / denominator;
		cout << "\n ROOT1 = " << root1 << "\t ROOT2 = " << root2 << endl;
	}

	else if (Discriminant == 0)
	{
		cout << "\n EQUAL ROOTS"<<endl;
		root1 = -coefficient_b / denominator;
		cout << "\n ROOT1 = " << root1<<endl;
	}
	
	else
	{
		cout << " IMAGINARY ROOTS" << endl;
		
	}
	
	return 0;
}
