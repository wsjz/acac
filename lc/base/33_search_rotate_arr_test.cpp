#include "33_search_rotate_arr.h"
#include "gtest/gtest.h"

TEST(ROT_ARRAY, case1) {
    Solution solution;
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    solution.search(arr, 0);
    solution.search(arr, 3);
    
    vector<int> arr2 = {1};
    solution.search(arr2, 0);
}