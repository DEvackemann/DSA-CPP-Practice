#include <iostream>
using namespace std;

int main()
{
    int f;
    double c;
    cout << "Enter the fahrenheit temperature :";
    cin >> f;
    c = (5.0 / 9) * (f - 32);
    cout << "the value of celsius is :" << c << endl;
}