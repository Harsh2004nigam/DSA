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

    unordered_map<int, int> frequencyMap;
    for (int num : arr) {
        frequencyMap[num]++;
    }

    int duplicateCount = 0;
    for (const auto& pair : frequencyMap) {
        if (pair.second > 1) {
            duplicateCount++;
        }
    }

    cout << "Total number of duplicate numbers: " << duplicateCount << endl;

    return 0;
}
