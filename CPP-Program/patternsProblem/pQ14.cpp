/*
Enter the number : 5
    1
   121
  12321
 1234321
123454321 
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int i = 1;
    while (i <= n)

    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        int k =i-1;
        while (k)
        {
            cout << k;
            k--;
        }
        cout << endl;
        i++;
    }
}