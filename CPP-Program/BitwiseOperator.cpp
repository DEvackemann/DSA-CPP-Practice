/*
AND &
OR |
NOT ~
XOP ^
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 3;
    int b = 6;

    cout << "Bitwise operation of a & b is :" << (a & b) << endl;
    cout << "Bitwise operation of a | b is :" << (a | b) << endl;
    cout << "Bitwise operation of ~a  is :" << (~a) << endl;
    cout << "Bitwise operation of ~ b is :" << (~b) << endl;
    cout << "Bitwise operation of a ^ b is :" << (a ^ b) << endl;
// shift operation i.e riht shift (>>) and left shift (<<)
    cout << ( 17>>2)<< endl;   // divide 17/2=8/2=4
    cout << (17>>1)<< endl;    
    cout << (19<<1)<< endl;     //19*2=38
    cout << (21<<2)<< endl;     //21*2=42*2=84
// increment and decrement operation
    int i =7;
    cout << (i++)<< endl;
    cout << (++i)<< endl;
    cout << (i--)<< endl;
    cout << (--i)<< endl;

    return 0;
}