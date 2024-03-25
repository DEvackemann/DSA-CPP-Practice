#include <iostream>
using namespace std;
int  main(){
    int n,a=0,b=1;
    cout<< "Enter the number of Fibonacci sequence: ";
    cin>> n;
    cout<<a <<" "<< b<< " ";
    for (int i =2;i<=n; i++){
       int fiboNext= a+b;
        cout << fiboNext <<" ";
        a=b;
        b=fiboNext;
    }
   
}
