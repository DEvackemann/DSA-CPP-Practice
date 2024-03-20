#include <iostream>
using namespace std;

int main() {
    char c;
    int n;

    cout << "Enter the character or number: ";
    cin >> c; // Read a character
    n = c;    // Assign ASCII value to n

    cout << "The ASCII value is " << n << endl;

    return 0;
}

/*
ASCII values of numbers is  
'0': 48
'1': 49
'2': 50
'3': 51
'4': 52
'5': 53
'6': 54
'7': 55
'8': 56
'9': 57

ASCII values for lowercase and uppercase letters:

Lowercase letters:

'a' : 97
'b' : 98
'c' : 99
...
...

'y' : 121
'z' : 122
Uppercase letters:

'A' : 65
'B' : 66
'C' : 67
...
...

'Y' : 89
'Z' : 90

*/