#include <iostream>
#include <vector>
using namespace std;

bool findPairTwoPointer(vector<int>& A, int X) {
    int left = 0, right = A.size() - 1;
    while (left < right) {
        int sum = A[left] + A[right];
        if (sum == X) return true;
        if (sum < X) left++;
        else right--;
    }
    return false;
}

int main() {
    vector<int> A = {1, 2, 4, 5, 7, 11};
    int X = 9;
    cout << (findPairTwoPointer(A, X) ? "Yes" : "No") << endl;
    return 0;
}
