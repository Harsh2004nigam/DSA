 #include <iostream>
using namespace std;

void printPattern(int rows) {
    for (int i = 1; i <= rows; ++i) {
        for (int j = i; j <= rows; ++j) {
            cout << j;
        }
        for (int j = rows - i + 1; j < rows; ++j) {
            cout << rows;
        }
        cout << endl;
    }
}

int main() {
    int rows;
    cin >> rows;
    printPattern(rows);
    return 0;
}
