// Enter the number : 5
// A 
// B C 
// C D E 
// D E F G 
// E F G H I 

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
        char ch ='A'+ i-1;  //or use char ch ='A'+ i+j-2;
        while (j<=i){
        cout<< ch << " " ;
        ch++;
        j++;
        }
        cout<<  endl;
        i++;
    }
}
