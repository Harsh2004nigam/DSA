#include <iostream>
using namespace std;

void printHalfDiamond(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int columns;
    cin >> columns;
    printHalfDiamond(columns);
    return 0;
}