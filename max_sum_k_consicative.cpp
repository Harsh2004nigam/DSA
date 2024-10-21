#include <iostream>
#include <vector>
using namespace std;

int maxSumKConsecutive(vector<int>& arr, int k) {
    if (arr.size() < k) return -1;
    int maxSum = 0, currentSum = 0;
    for (int i = 0; i < k; i++) currentSum += arr[i];
    maxSum = currentSum;
    for (int i = k; i < arr.size(); i++) {
        currentSum += arr[i] - arr[i - k];
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main() {
    vector<int> arr = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k = 4;
    cout << maxSumKConsecutive(arr, k) << endl;
    return 0;
}
