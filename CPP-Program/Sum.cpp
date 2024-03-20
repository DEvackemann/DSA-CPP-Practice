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
/*
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
}10
*/