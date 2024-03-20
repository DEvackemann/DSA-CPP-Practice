// Enter the number : 5
// A 
// B C 
// D E F 
// G H I J 
// K L M N O


#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter the number : ";
    cin>> n;
    int i=1;
    char count='A';
    while (i<=n)
    { 
        char j=1 ;
        while (j<=i){
        cout<< count << " " ;
        count++;
        j++;
        }
        cout<<  endl;
        i++;
    }
    
}
