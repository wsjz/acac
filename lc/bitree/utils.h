#include <iostream>
#include <list>
#include <algorithm>
#include <cmath>
#include <functional>

using namespace std;

/**
 * lc 124
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

static TreeNode *buildTree(list<int> levels) {
    if (levels.empty()) {
        return nullptr;
    }
    list<TreeNode *> nodes;
    auto *root = new TreeNode(levels.front());
    levels.pop_front();
    nodes.push_back(root);
    while (!nodes.empty()) {
        auto *node = nodes.front();
        nodes.pop_front();
        if (!levels.empty()) {
            int lv = levels.front();
            levels.pop_front();
            if (lv == INT32_MIN) {
                node->left = nullptr;
            } else {
                node->left = new TreeNode(lv);
                nodes.push_back(node->left);
            }
        }
        if (!levels.empty()) {
            int rv = levels.front();
            levels.pop_front();
            if (rv == INT32_MIN) {
                node->right = nullptr;
            } else {
                node->right = new TreeNode(rv);
                nodes.push_back(node->right);
            }
        }
    }
    return root;
}

static void printTree(TreeNode *tree) {
    list<TreeNode *> nodes;
    nodes.push_back(tree);
    int level = 1;
    int num_cur_nodes = 0;
    int num_level_node = 1;
    int processed_nodes = 0;
    while (!nodes.empty()) {
        auto *node = nodes.front();
        nodes.pop_front();
        if (node == nullptr && processed_nodes < static_cast<int>(pow(2, level)) - 1) {
            cout << " " << "null" << " ";
            processed_nodes++;
            continue;
        } else if (node == nullptr) {
            continue;  
        }
        cout << " " << node->val << " ";
        processed_nodes++;
        num_cur_nodes++;
        if (num_cur_nodes == num_level_node) {
            cout << "\n";
            num_cur_nodes = 0;
            num_level_node = static_cast<int>(pow(2, level++));
        }
        nodes.push_back(node->left);
        nodes.push_back(node->right);
    }
    cout << endl;
}

static vector<vector<long>> matrix_mul(const vector<vector<long>>& a, const vector<vector<long>>& b) {
    assert(!b.empty() && !a.empty());
    size_t rows = a.size();
    size_t columns = b[0].size();
    size_t middle = a[0].size();
    vector<vector<long>> c(rows, vector<long>(columns));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            for (int k = 0; k < middle; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return c;
}

static void matrix_print(const vector<vector<long>>& a) {
    size_t rows = a.size();
    size_t columns = a[0].size();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << a[i][j];
            if (j != columns - 1) {
                cout << "\t";
            } else {
                cout << "\n";
            }
        }
    }
}

inline __uint128_t read(){
    __uint128_t x = 0;
    int ch = getchar();
    while (ch > '0' && ch <= '9') {
        x = x * 10 + (ch - '0');
        ch = getchar();
    }
    return x;
}

inline void write(__uint128_t x){
    if (x > 9) {
        write(x / 10);
    }
    putchar(int(x % __uint128_t(10) + '0'));
}

template<typename T>
static T quick_pow(T& elem, long pow, T& init_val, function<T(T&, T&)> cal) {
    T ret = init_val;
    while(pow > 0) {
        if ((pow & 1) == 1) {
            ret = cal(ret, elem);
        }
        elem = cal(elem, elem);
        pow >>= 1;
    }
    return ret;
}