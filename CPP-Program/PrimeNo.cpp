//check prime number using 
#include <iostream>
using namespace std;
int  main(){
    int n;
    cout<< "Enter the number : ";
    cin>> n;
    bool isPrime = 1;
    for (int i =2;i<n; i++){
       if(n%i==0){
        //   cout<< "not  prime";
           isPrime=0;
           break;
      }
    }
    if(isPrime==0){
        cout<< "not prime"<<endl;
    }
    else{
          cout<< "prime";
      }
    }
    
// #include <iostream>
// using namespace std;
// int  main(){
//     int n;
//     cout<< "Enter the number : ";
//     cin>> n;
//     for (int i =2;i<n; i++){
//        if(n%i==0){
//           cout<< "not  prime";
//            break;
//       }
//     else{
//           cout<< "prime";
//           break;
//       }
//     }
// }
