#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i <= 10; ++i) {
        if (i % 2 == 0) {
            // Skip even numbers
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
//o/p 1 3 5 7 9 