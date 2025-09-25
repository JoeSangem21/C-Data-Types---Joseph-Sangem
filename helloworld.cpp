/**
*Joseph Sangem
*C++ Data Types - Joseph Sangem
*Academy For Computer and Information Sciences
*September 25, 2025
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
//This part is for my int data type
    
    float decimal;
    cout << "Enter the first decimal that you think of: " << endl;
    cin >> decimal;
    //This part is for my float data type

    char letter;
    cout << "Enter your favorite letter of the alphabet: " << endl;
    cin >> letter;
    //This part is for my char data type

    bool usStates = true;
    bool moreStates = false;

    cout << boolalpha;

    cout << "Does the US have 50 States? " << usStates << "\n";
    cout << "Does the US have 60 States? " << moreStates << "\n";
    //This part is for my Bool data type

    string name;
    cin.ignore();
    cout << "Enter your name here: ";
    getline(cin, name);
    //This part is for my string data type

    return 0;

}
