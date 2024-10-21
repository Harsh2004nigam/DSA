#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> maxLenSubarray(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    int sum = 0, maxLength = 0, start = -1, end = -1;
    map[0] = -1;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (map.find(sum - target) != map.end() && i - map[sum - target] > maxLength) {
            start = map[sum - target] + 1;
            end = i;
            maxLength = i - map[sum - target];
        }
        if (map.find(sum) == map.end()) map[sum] = i;
    }
    return {nums.begin() + start, nums.begin() + end + 1};
}

int main() {
    vector<int> nums = {5, 6, -5, 5, 3, 5, 3, -2, 0};
    int target = 8;
    vector<int> result = maxLenSubarray(nums, target);
    for (int num : result) cout << num << " ";
    cout << endl;
    return 0;
}
