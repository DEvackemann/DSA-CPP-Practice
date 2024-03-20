// 1st
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int  a= 9;
    if(a==9){
        cout<< "niney";
    }
    if(a>9){
        cout << "positive";
    }
    
    else{
        cout<<"Negative";
    }

}
//output : nineyNegative

/*The first if statement checks if a is equal to 9 (if(a == 9)), which is true. So, it prints "niney".
The second if statement checks if a is greater than 9 (if(a > 9)), which is false. So, it doesn't execute the cout << "positive"; statement.
The else statement is associated with the second if statement. Since the second if condition is false, the else statement executes and prints "Negative"*/

//2nd
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int  a= 2;
    int b = a+1;
    
    if((a=3)==b){
        cout<< a;
    }

    
    else{
        cout<<a+1;
    }

}
//output : 3
/*Inside the if statement condition, there is an assignment operation (a=3). This operation assigns the value 3 to a and returns 3.
As 3 is equal to b, the condition (a=3)==b evaluates to true.
Therefore, the code inside the if block is executed, and it prints the value of a, which is 3.*/

//3rd
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int  a= 24;

    
    if(a>20){
        cout<< "love";
    }
    else if (a==24){
        cout<< " lover";
    }
    
    else{
        cout<<"devloper";
    }
    cout<< a;
}
//output :love24

//4th
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter the character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a lowercase character." ;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an uppercase character." ;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a numeric character." ;
    }
    else {
        cout << ch << " is neither a letter nor a number." ;
    }

    return 0;
}

//Question sum of all  number
#include <iostream>
using namespace std;
int main() {
int n;
cout << "enter the number ";
cin>>n;
int i =1;
int sum =0;
while (i <=n ){
  
    sum= sum +i;
    cout<<" sum of number is :" << sum <<endl;
    i++;
} 
    return 0;
}
// sum of even number
#include <iostream>
using namespace std;
int main() {
int n;
cout << "enter the number ";
cin>>n;
int i =2;
int sum =0;
while (i<=n ){
  if(i%2==0){
    sum= sum +i;
    cout<<" sum of "<< n << " numbers is :" << sum <<endl;}
    i++;
} 
    return 0;
}

//the sum of odd number 
#include <iostream>
using namespace std;
int main() {
int n;
cout << "enter the number ";
cin>>n;
int i =1;
int sum =0;
while (i<=n ){
  if(i%2!=0){
    sum= sum +i;
    cout<<" sum of odd "<< n << " numbers is :" << sum
    <<endl;}
    i++;
} 
    return 0;
}