/*Enter the number : 5
1234554321
1234**4321
123****321
12******21
1********1
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        // Print numbers from 1 to n-i+1
        while (j <= n - i + 1) {
            cout << j;
            j++;
        }

        int k = 1;
        // Print asterisks for the gap
        while (k <=  2*(i - 1)) {
            cout << "*";
            k++;
        }

        int m = n - i + 1;
        // Print numbers in reverse order from n-i+1 to 1
        while (m >= 1) {
            cout << m;
            m--;
        }

        cout << endl;
        i++;
    }

    return 0;
}
