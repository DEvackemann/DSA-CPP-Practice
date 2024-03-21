// Enter the number : 4
//       * 
//     * * 
//   * * * 
// * * * * 

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
        int space= n-i;
        while(space){
            cout << " ";
            space--;
        }
        char j=1 ;
        while (j<=i){
        cout<< "*" ;
    
        j++;
        }
        cout<<  endl;
        i++;
    }
}