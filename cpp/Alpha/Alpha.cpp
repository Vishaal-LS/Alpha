// 3.9 Program to calculate tax
// if income<1,50,000, then no tax
//if income 150,001-300000, then 10% tax
//if income 300,001-500,000, then 20% tax
//if income>500,001, then 30% tax

#include<iostream>
#define MIN1 150001
#define MAX1 300000
#define RATE1 0.10
#define MIN2 300001
#define MAX2 50000
#define RATE2 0.20
#define MIN3 500001
#define RATE3 0.30

using namespace std;

void main()
{
	double income, taxable_income, tax;
	cout << "\n Enter the income : ";
	cin >> income;
	taxable_income = income - 150000;
	if (taxable_income <= 0)
	{
		cout << "\n No Tax!";
	}
	else if (taxable_income >= MIN1 && taxable_income < MAX1)
	{
		tax = (taxable_income - MIN1) * RATE1;
	}
	else if (taxable_income >= MIN2 && taxable_income < MAX2)
	{
		tax = (taxable_income - MIN2 * RATE2);
	}
	else
	{
		tax = (taxable_income - MIN3) * RATE3;
	}

	cout << "\n TAX = " << tax;
}