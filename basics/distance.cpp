#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;



int main()
{   
    string input_coordinates;
    vector<string> point_A; 

    cout << "Enter The First Coordinate : ";
    cin >> input_coordinates;

    stringstream input_stream(input_coordinates);
    string element;
    
    while(getline(input_stream, element,','))
    {
        point_A.push_back(element);
    }
    
}
