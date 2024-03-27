// decimal number to binary number conversion
// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n;
    cout <<"Enter the Decimal number : ";
    cin >> n;
    int ans=0;
    int i =0;
    while(n!=0){  
        int bit = n&1;   //last bit is 1 --> 1101
        ans = (bit* pow(10,i))+ ans;
        n=n>>1; //move to the next bit like n=13 then n=6,3,1,0
        i++;
    }
    cout << "The Binary number is : "<< ans;
    return 0;
}





//negative decimal to binary 
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the Decimal number : ";
    cin >> n;

    // Check if the number is negative
    bool isNegative = (n < 0);
    if (isNegative) {
        // Convert the negative number to its two's complement
        n = -n;
        n = ~n + 1;
    }

    int ans = 0;
    int i = 0;
    while (n != 0) {
        int bit = n & 1;   // Extract the last bit
        ans += bit * pow(10, i); // Add the bit to the answer
        n = n >> 1; // Right shift to get next bit
        i++;
    }

    // If the original number was negative, add a negative sign to the binary representation
    if (isNegative)
        cout << "The Binary number is : -" << ans;
    else
        cout << "The Binary number is : " << ans;

    
    cin.ignore(); 
    cin.get(); 

    return 0;
}
