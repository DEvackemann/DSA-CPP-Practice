#include <iostream>
using namespace std;
int main()
{
    int a = 'a';
    cout << a << endl;
    char ch = 98;
    cout << ch << endl;
    char ch1= 123456;  // overflow @
    cout<< ch1<< endl;
    int d= -5;
    cout<< d<< endl;
    // for printing only positive integer i.e  0 to 2^32 - 1  use UNSIGNED 
    unsigned int num = 2133;
    cout<< num << endl;
    unsigned int num2= -3243454;  // give huge value 
    cout << num2 << endl;


}


