#include <iostream>
using namespace std;

int main() {
    int size, target, index = -1;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number to search for: ";
    cin >> target;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << "First occurrence of " << target << " is at index: " << index << endl;
    } else {
        cout << target << " not found in the array." << endl;
    }

    return 0;
}
