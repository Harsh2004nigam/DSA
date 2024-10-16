#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> countMap;
    for (int num : arr) {
        countMap[num]++;
    }

    cout << "Unique numbers are:\n";
    for (const auto& pair : countMap) {
        if (pair.second == 1) {
            cout << pair.first << " ";
        }
    }
    cout << endl;

    return 0;
}
