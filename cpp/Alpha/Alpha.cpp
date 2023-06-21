// Program to combine string and integer using classes
#include <iostream>
#include <string>

using namespace std;

class MyClass
	
{

public:
	int mynum;
	string mystring;
};

int main()
{
	MyClass myobj;

	myobj.mynum = 15;
	myobj.mystring = " is the number of guns i own";

	cout << myobj.mynum << myobj.mystring << "\n";
	return 0;		
}

