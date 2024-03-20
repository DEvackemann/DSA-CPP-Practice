/* print the pattern like this 
Enter the number 4
1 2 3 4 
1 2 3 4 
1 2 3 4 
1 2 3 4 
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
        int j=1;
        while (j<=n){
        cout<< j << " " ; // or reverse cout<< n-j+1 << " " ;
        j++;
        }
        cout<<  endl;
        i++;
    }
    
}
/* for reverse operation formula is  cout<< n-j+1 << " " ;
Enter the number : 4
4 3 2 1 
4 3 2 1 
4 3 2 1 
4 3 2 1  */