#include <climits>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            int mid = l + (r -l ) /2;
            if (nums[mid] == target) {
                return mid;
            }
            if (target > nums[0]) {
                if (nums[mid] < nums[0]) {
                    nums[mid] = INT_MAX;
                }
            } else {
                if (nums[mid] >= nums[0]) {
                    nums[mid] = INT_MIN;
                }
            }
            if (nums[mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return -1;
    }
};