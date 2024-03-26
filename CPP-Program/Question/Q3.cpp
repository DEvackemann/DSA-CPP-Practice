#include<iostream>
using namespace std ;
int main(){
    for (int i=0 ;i<=15;i+=2) { 
        cout << i<<" ";
            if(i&1) {
                continue;
             }
             i++;
        }
}
// a number is odd or even. If it evaluates to true, it means i is odd; if it evaluates to false, it means i is even.
//0 3 5 7 9 11 13 15 