# Experiment 2
## Aim-
To study and implement C++ program structure(Data Types).
## Apparatus -
Online compiler (programiz)

## Theory-
Understanding the size of various data types is crucial for memory management and optimization in programming. 
Different data types (e.g., int, short int, long int, float, double, long double, bool,char) occupy different amounts of memory.
and checking of size of some data types given by the user.
## Code - 
### 1.
```
// sneha diwan
// 23070123126
// entc b2 
// experiment 2 
#include<iostream>
using namespace std;
int main(){
    cout<< "size of char: " <<sizeof(char) << "byte(s)" <<endl;
     cout<< "size of int: " <<sizeof(int)<< "byte(s)" <<endl;
     cout<< "size of short int: " <<sizeof(short int) << "byte(s)" <<endl;
     cout<< "size of long int: " <<sizeof(long int) << "byte(s)" <<endl;
     cout<< "size of float : " <<sizeof(float) << "byte(s)" <<endl;
     cout<< "size of double: " <<sizeof(double) << "byte(s)" <<endl;
     cout<< "size of long double: " <<sizeof(long double) << "byte(s)" <<endl;
     cout<< "size of bool: " <<sizeof(bool) << "byte(s)" <<endl;
     return 0;
}

```
### 2.
```
// sneha diwan
// 23070123126
// entc b2 
// experiment 2 b
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter any integer: ";
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
```

## Explanation - 
The program uses the sizeof operator to determine and display the size of various data types in bytes. It includes common data types such as int, float, double, char, and others.

## Output

### 1. 
![Screenshot 2024-07-31 095722](https://github.com/user-attachments/assets/58db7b5d-4d33-4fb8-a314-7dcd8484a8a4)

### 2.
![Screenshot 2024-07-31 100102](https://github.com/user-attachments/assets/0c6b4fd9-477d-4e34-96fd-a3c695db4421)

## Conclusion - 
This program helps in understanding how much memory is allocated for different data types, which is important for writing efficient and optimized code.
