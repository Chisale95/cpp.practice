#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    int sum = 0;

    // Input elements
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    // Output result
    cout << "\nTotal sum = " << sum << endl;

    return 0;
}
