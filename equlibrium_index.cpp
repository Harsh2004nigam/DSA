#include <iostream>
#include <vector>
using namespace std;

int equilibriumIndex(vector<int>& arr) {
    int totalSum = 0, leftSum = 0;
    for (int num : arr) totalSum += num;
    for (int i = 0; i < arr.size(); i++) {
        totalSum -= arr[i];
        if (leftSum == totalSum) return i + 1;
        leftSum += arr[i];
    }
    return -1;
}

int main() {
    vector<int> arr = {-7, 1, 5, 2, -4, 3, 0};
    cout << equilibriumIndex(arr) << endl;
    return 0;
}
