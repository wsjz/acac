#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

/**
 * lc 1
 */
class Solution {
public:
    static vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            auto iter = map.find(target - nums[i]);
            if (iter != map.end()) {
                return {iter->second, i};
            }
            map.insert(pair<int, int>(nums[i], i));
        }
        return {};
    }
};

int main() {
    Solution solution;
    vector<int> arr = {3, 2, 4};
    auto res = solution.twoSum(arr, 6);
    for_each(res.begin(), res.end(), [](const auto &i) { cout << i << " "; });
}