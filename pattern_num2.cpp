#include <iostream>
using namespace std;

void printPattern(int rows, int columns) {
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= columns; ++j) {
            if (i == 1 || i == rows || j == 1 || j == columns) {
                cout << "1";
            } else {
                cout << "0";
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
