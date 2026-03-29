#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;   // Constant for array size
    int numbers[SIZE];      // Array to store input numbers
    int evenCount = 0;      // Counter for even numbers
    int oddCount = 0;       // Counter for odd numbers
    int i = 0;              // Loop counter

    cout << "Enter " << SIZE << " integers:" << endl;

    while (i < SIZE) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];

        // Count even and odd numbers
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        i++;
    }

    // Print results
    cout << "\nResults:" << endl;
    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}
