// Program for multiple objects of class

#include <iostream>
#include <string>

using namespace std;

class myclass
{
public:
	void mymethod()
	{
		cout << "this is MY method!";
	}
};

int main()
{
	myclass myobj;
	myobj.mymethod();
	return 0;
}
