/*
Enter the number : 5
12345
1234*
123**
12***
1****
*/
// try to solve the pattern 16 
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

        int j = 1;
        while (j <= n-i+1)
        {
            cout << j;
            j++;
        }
        int k =1;
        while (k<i)
        {
            cout << "*";
            k++;
        }
        cout << endl;
        i++;
    }
}




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

        int j = 1;
        while (j <= n-i+1)
        {
            cout << j;
            j++;
        }
        int k =1;
        while (k<i) //i-1
        {
            cout << "*";
            k++;
        }
        
         int l =1;
        while ( l>1) //i-1
        {
            cout << "*";
            l--;
        }
        int m= n - i + 1;
         while (m <= n-i+1) {
            cout << m;
            m++;
        }

        
        
        cout << endl;
        i++;
    }
}


