#include "gtest/gtest.h"
#include "1_two_sum.h"

TEST(TwoSum, two_sum1) {
    vector<int> arr = {3, 2, 4};
    auto res = Solution::twoSum(arr, 6);
    for_each(res.begin(), res.end(), [](const auto &i) { cout << i << " "; });
    cout << endl;
}