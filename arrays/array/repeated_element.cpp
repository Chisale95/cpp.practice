#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE];

    // Input
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Check for repeated elements
    bool found = false;

    for (int i = 0; i < SIZE - 1 && !found; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (numbers[i] == numbers[j]) {
                cout << "Repeated number found: " << numbers[i] << endl;
                found = true;
                break;
            }
        }
    }

    // Output if no duplicates found
    if (!found) {
        cout << "No repeated elements" << endl;
    }

    return 0;
}
