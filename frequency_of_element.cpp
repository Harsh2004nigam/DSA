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

    cout << "Frequency of each number:\n";
    for (const auto& pair : frequencyMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
