// Program to enter marks of students in 4 subject

#include<iostream>
using namespace std;

int main()
{
    int marks1, marks2, marks3, marks4, total = 0;
    float avg = 0.0;
    
    cout << "Enter the marks in Mathematics, Science, Social Science, and Computers: ";
    cin >> marks1 >> marks2 >> marks3 >> marks4;
    
    total = marks1 + marks2 + marks3 + marks4;
    avg = static_cast<float>(total) / 4;
    
    cout << "Total: " << total << ", Average: " << avg << endl;
    
    if (avg >= 75)
    {
        cout << "Distinction" << endl;
    }
    else if (avg >= 60)
    {
        cout << "First Division" << endl;
    }
    else if (avg >= 50)
    {
        cout << "Second Division" << endl;
    }
    else if (avg >= 40)
    {
        cout << "Third Division" << endl;
    }
    else
    {
        cout << "FAIL" << endl;
    }

    return 0;
}
