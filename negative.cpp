#include <iostream>
using namespace std;

int main() {
    int size;

    // Get the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];

    // Input elements into the array
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Count negative numbers
    int negativeCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            negativeCount++;
        }
    }

    // Output the result
    cout << "Total number of negative numbers: " << negativeCount << endl;

    return 0;
}
