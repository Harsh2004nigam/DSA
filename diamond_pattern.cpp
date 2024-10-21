#include <iostream>
using namespace std;

bool printDiamond(int rows) {
    if (rows % 2 == 0) {
        cout << "Error: Number of rows must be odd." << endl;
        return false;
    }

    int n = rows / 2;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 0; --i) {
        for (int j = 0; j < n - i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return true;
}

int main() {
    int rows;
    cin >> rows;
    printDiamond(rows);
    return 0;
}
