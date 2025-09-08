#include <iostream>
#include <string>
using namespace std;
int main()
{
    string firstName = "Mohith P ";
    string lastName = "Shetty";
    int x = 50;
    // string fullName = firstName + lastName;
    string fullName = firstName.append(lastName); // concatination can use + or append
    cout << fullName << "\n"
         << fullName.length() << "\n" // to find length of the string we can use length or size
         << fullName.size() << "\n";
    // accessing string
    cout << fullName[7] << "\n";
    cout << fullName[fullName.length() - 6] << "\n";
    fullName[0] = 'p';
    cout << fullName << "\n";
    // accessing can also be done by using at()
    // cout << fullName.at(7);
    string LargeString = "This is a \"Large\" String used to \'Show\' the use of \\Special\tCharacter\n";
    cout << LargeString << LargeString[10];
    // backslash \ is use for having special character in a string
    // user Input string
    cout << "Write a sentance :";
    string Sentence;
    // cin >> Sentence; //cin will consider the white space as end of the input
    getline(cin, Sentence);
    cout << "Your sentence:" << Sentence;
    return 0;
}