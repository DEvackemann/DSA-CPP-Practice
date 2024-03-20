/* Draw the Triangle pattern
Enter the number : 4
★ 
★ ★ 
★ ★ ★ 
★ ★ ★ ★ 
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
        while (j<=i){
        cout<< "★" << " " ;
        
        j++;
        }
        cout<<  endl;
        i++;
    }
    
}

/* Draw the Triangle pattern for count
Enter the number : 4
1 
2 3 
4 5 6 
7 8 9 10 */
/*  solution 
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter the number : ";
    cin>> n;
    int i=1;
    int count =1;
    while (i<=n)
    { 
        int j=1;
        while (j<=i){
        cout<< count << " " ;
        count ++;
        j++;
        }
        cout<<  endl;
        i++;
    }
    
}

*/


/*
Enter the number : 4
1 
2 3 
3 4 5 
4 5 6 7

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
        int count =i;
        while (j<=i){
        cout<< count << " " ;    // by using formula    cout<< i+j-1 << " " ;
        count ++;
        j++;
        }
        cout<<  endl;
        i++;
    }
    
}

similarlly Enter the number : 4
1 
2 1 
3 2 1 
4 3 2 1 

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
        int count =i;
        while (j<=i){
        cout<< count << " " ; // by using formula    cout<< i-j+1 << " " ;
        count --;
        j++;
        }
        cout<<  endl;
        i++;
    }
    
}



*/