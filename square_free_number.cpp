#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool checkSqrt(int n) {
    int sqrt_n = sqrt(n);
    return (sqrt_n * sqrt_n == n);
}

int squareFreeNum(const vector<int>& factor) {
    int count = 0;
    for (int i = 0; i < factor.size(); i++) {
        if (checkSqrt(factor[i])) continue;  // Skip the factor if it's a perfect square

        bool hasSquareDivisor = false;
        for (int j = 2; j <= sqrt(factor[i]); j++) {
            if (factor[i] % (j * j) == 0) {
                hasSquareDivisor = true;
                break;
            }
        }

        if (!hasSquareDivisor) count++;
    }
    return count;
}

vector<int> factors(int n) {
    vector<int> fact;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            fact.push_back(i);
        }
    }
    return fact;
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    vector<int> factor = factors(n);

    int ans = squareFreeNum(factor);
    cout << "ans : " << ans << endl;

    for (int i : factor) {
        cout << i << " ";
    }
    return 0;
}