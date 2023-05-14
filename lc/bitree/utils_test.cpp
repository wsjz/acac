#include "gtest/gtest.h"
#include "utils.h"

TEST(Utils, utils1) {
    list<int> levels = {1, 2, 3, 4, 5, INT32_MIN, 7};
    auto* tree = buildTree(levels);
    printTree(tree);
}


TEST(Utils, utils2) {
    list<int> levels = {1, 2, 3, 4, 5, INT32_MIN, 7};
    auto* tree = buildTree(levels);
    printTree(tree);
}

TEST(Utils, utils3) {
    vector<vector<long>> matrix = {{1, 1, 1}, {1, 0, 0}, {0, 1, 0}};
    matrix_print(matrix);
    cout << endl;
    vector<vector<long>> ret = matrix_mul(matrix, matrix);
    matrix_print(ret);
}

TEST(Utils, utils4) {
    __uint128_t a = 2;
    __uint128_t v = 1;
    auto res = quick_pow<__uint128_t>(a, 127, v, [](__uint128_t x, __uint128_t y){
        return x * y;
    });
    write(res);
    cout << endl;
    
    using type = long;
    vector<vector<type>> matrix = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    vector<vector<type>> iv = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    auto ret = quick_pow<vector<vector<type>>>(matrix, 33, iv, [](vector<vector<type>>& x, vector<vector<type>>& y){
        return matrix_mul(x, y);
    });
    matrix_print(ret);
}