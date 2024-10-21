#include <iostream>
#include <vector>
using namespace std;

int mergeAndCount(vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    vector<int> left(n1), right(n2);
    for (int i = 0; i < n1; i++) left[i] = arr[l + i];
    for (int i = 0; i < n2; i++) right[i] = arr[m + 1 + i];
    int i = 0, j = 0, k = l, swaps = 0;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) arr[k++] = left[i++];
        else {
            arr[k++] = right[j++];
            swaps += (n1 - i);
        }
    }
    while (i < n1) arr[k++] = left[i++];
    while (j < n2) arr[k++] = right[j++];
    return swaps;
}

int mergeSortAndCount(vector<int>& arr, int l, int r) {
    int count = 0;
    if (l < r) {
        int m = l + (r - l) / 2;
        count += mergeSortAndCount(arr, l, m);
        count += mergeSortAndCount(arr, m + 1, r);
        count += mergeAndCount(arr, l, m, r);
    }
    return count;
}

int main() {
    vector<int> arr = {7, 2, 6, 3};
    cout << mergeSortAndCount(arr, 0, arr.size() - 1) << endl;
    return 0;
}
