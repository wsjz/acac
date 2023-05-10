class Solution {
public:
    int sumNums(int n) {
        // n > 0 ? n += sumNums(n - 1) : 0
        n && (n += sumNums(n - 1));
        return n;
    }

    int sumNums1(int n) {
        return sizeof(bool[n][n + 1]) >> 1;
    }
};
