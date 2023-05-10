class Solution {
public:
    bool isPowerOfThree(int n) {
        while (n && n % 3 == 0) {
            n /= 3;
        }
        return n == 1;
    }

    static constexpr int POW_INT_MAX = 1162261467; // 3 * 19
    bool isPowerOfThree1(int n) {
        return n > 0 && POW_INT_MAX % n == 0;
    }
};