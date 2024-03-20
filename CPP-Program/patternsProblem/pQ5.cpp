/*
Enter the number : 4
A A A A
B B B B
C C C C
D D D D
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

        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + i - 1; // j is samw i is changing
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

/*
Enter the number : 4
A B C D 
A B C D 
A B C D 
A B C D 

#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter the number : ";
    cin>> n;
    int i=1;
   
    while (i<=n)
    { 
        char j=1 ;
        while (j<=n){
            char ch ='A'+j-1 ; //j is changing 
        cout<< ch << " " ;
    ch++;
        j++;
        }
        cout<<  endl;
        i++;
    }
    
}

*/