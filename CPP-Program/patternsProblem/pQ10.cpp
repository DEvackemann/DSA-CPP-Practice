// Enter the number : 4
// D 
// C D 
// B C D 
// A B C D

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
        char ch ='A' + n -i ;
        while (j<=i){
        cout<< ch << " " ;
        ch++;
        j++;
        }
        cout<<  endl;
        i++;
    }
}