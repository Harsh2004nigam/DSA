#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    bool isPalindrome = true;
    for (int i = 0; i < 2; i++) {
        if (numbers[i] != numbers[4 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The array is in palindrome order." << endl;
    } else {
        cout << "The array is not in palindrome order." << endl;
    }
    
    return 0;
}
