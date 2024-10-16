#include <iostream>
using namespace std;

int main() {
    int numbers[7];
    cout << "Enter 7 integers:\n";
    for (int i = 0; i < 7; i++) {
        cin >> numbers[i];
    }

    for (int i = 6; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}
