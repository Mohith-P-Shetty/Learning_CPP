#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cout << x << "\n";
    // Numbers
    int num = 10;
    cout << num << "\n"; // Prnts 10
    // int num = 100rer;
    // cout << num; error because we have character in num
    string str = "Mohith\n";
    cout << str;
    // Creating auto variables
    auto myNum = 5;                  // int
    auto myFloatNum = 5.99;          // float
    auto myDoubleNum = 9.98;         // double
    auto myLetter = 'D';             // char
    auto myBoolean = true;           // bool
    auto myString = string("Hello"); // std::string

    cout << "int: " << myNum << "\n";
    cout << "float: " << myFloatNum << "\n";
    cout << "double: " << myDoubleNum << "\n";
    cout << "char: " << myLetter << "\n";
    cout << "bool: " << myBoolean << "\n";
    cout << "string: " << myString << "\n";
    return 0;
}