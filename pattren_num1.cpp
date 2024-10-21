#include <iostream>
using namespace std;

void printPattern(int rows, int columns) {
    for (int i = 1; i <= rows; ++i) {
        if (i % 2 != 0) {
            for (int j = 1; j <= columns; ++j) {
                cout << j;
            }
        } else {
            for (int j = columns; j >= 1; --j) {
                cout << j;
            }
        }
        cout << endl;
    }
}

int main() {
    int rows, columns;
    cin >> rows >> columns;
    printPattern(rows, columns);
    return 0;
}
