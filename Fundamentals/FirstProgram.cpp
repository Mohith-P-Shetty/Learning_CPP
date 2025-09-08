#include <iostream>
using namespace std;

string Greet = "Hello World!\n";
string _learn = "I am Learning C++\n\n";
int num = 3;
const int mynum = 9;
int main()

{
    cout << Greet << _learn;
    // num = 12;
    cin >> num;
    cout << num / 3 << endl;
    cout << mynum / 3 << endl;
    return 0;
}