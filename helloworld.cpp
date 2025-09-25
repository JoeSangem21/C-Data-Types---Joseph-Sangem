#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;

    float decimal;
    cout << "Enter the first decimal that you think of: " << endl;
    cin >> decimal;

    char letter;
    cout << "Enter your favorite letter of the alphabet: " << endl;
    cin >> letter;

    bool usStates = true;
    bool moreStates = false;

    cout << boolalpha;

    cout << "Does the US have 50 States? " << usStates << "\n";
    cout << "Does the US have 60 States? " << moreStates << "\n";

    string name;
    cin.ignore();
    cout << "Enter your name here: ";
    getline(cin, name);

    return 0;
}