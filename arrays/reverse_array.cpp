#include <iostream>
using namespace std;

int main() {
    // Original array
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    // Print original array
    cout << "Original array: ";
    int i = 0;
    while (i < size) {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;

    // Reverse the array using while loop
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    // Print reversed array
    cout << "Reversed array: ";
    i = 0;
    while (i < size) {
        cout << arr[i] << " ";
        i++;
    }

    return 0;
}
