/*Enter the number : 5
A 
B B 
C C C 
D D D D 
E E E E E 
*/

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
        char ch ='A'+i-1;
        while (j<=i){
        cout<< ch << " " ;
        j++;
        }
        cout<<  endl;
        i++;
    }
    
}



// #include<iostream>
// using namespace std;
// int main()
// {
//     int n ;
//     cout << "Enter the number : ";
//     cin>> n;
//     int i=1;
//     while (i<=n)
//     { 
//         char j=1 ;
//         char ch ='A'+i+j-2 ;
//         while (j<=i){
//         cout<< ch << " " ;
        
//         j++;
//         }
//         cout<<  endl;
//         i++;
//     }
    
// }
