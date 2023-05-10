class Solution {
public:
    /**
     * 8 = 1000
     * 7 = 0111
     * 8 & 7 = 0
     * n     = 100...0
     * n - 1 = 011...1
     */
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n-1)) == 0;
    }

    /**
     * −n 的二进制表示为 n 的补码（二进制表示的每一位取反再加1）
     * n  = 10...0
     * -n = ~(10...0) + 1 = 01...1 + 1 = n
     */
    bool isPowerOfTwo1(int n) {
        return n > 0 && (n & -n) == n;
    }

    static constexpr int POW_INT_MAX = 1 << 30;
    bool isPowerOfTwo2(int n) {
        return n > 0 && POW_INT_MAX % n == 0;
    }
};