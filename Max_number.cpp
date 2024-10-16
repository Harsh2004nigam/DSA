#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }
    int maxNum = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > maxNum) {
            maxNum = numbers[i];
        }
    }
    cout << "Maximum number: " << maxNum << endl;
    return 0;
}
