#include <iostream>
using namespace std;
int main() {
int n;
cout << "enter the number ";
cin>> n;
if (n%2 != 0){
    cout << " n is prime number";
    
} else{
    cout<< " n is not prime num";
}

//using while 
/*int i=2;
while ( i <n ){ // n/n=0 that's why we use i<n (n-1)
if (n%i == 0){
    cout << " n is not prime number"<<  i<< endl;
    
} else{
    cout<< " n is  prime num" << i<< endl;
}
i++;
}
    return 0;*/
}