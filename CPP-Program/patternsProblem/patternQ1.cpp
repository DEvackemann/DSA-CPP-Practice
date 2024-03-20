/*print the pattern like this
enter the number : 3
***
***
***
 */

#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "enter the number : ";
    cin >> n;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}
