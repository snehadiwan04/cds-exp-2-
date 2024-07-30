// sneha diwan
// 23070123126
// entc b2 
// experiment 2 b
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter any interger: ";
    cin >> a;
    cout << "\ninteger = " << a << " and size is " << sizeof(a) << " bytes";
    float b;
    cout << "\nenter a number: ";
    cin >> b;
    cout << "\nFloat = " << b << " and size is " << sizeof(b) << " bytes";
    short int c;
    cout << "\nenter an interger: ";
    cin >> c;
    cout << "\nShort integer = " << c << " and size is " << sizeof(c) << " bytes";
    return 0;
}
/*
enter any interger: 987.25

integer = 987 and size is 4 bytes
enter a number: 
Float = 0.25 and size is 4 bytes
*/