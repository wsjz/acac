class Solution {
public:
    /* 
     * 2的幂偶数二进制位为1
     * 4的幂奇数二进制位为1
     * 10  
     * 100 = 4
     * 1000
     * 10000 = 16
     * 构造偶数位为0，奇数位为1的掩码10101010101010101010101010101010 = 0xaaaaaaaa
     */
    bool isPowerOfFour(int n) {
        return n > 0 && (n & (n-1)) == 0 && (n & 0xaaaaaaaa) == 0;
    }

    bool isPowerOfFour1(int n) {
        while (n && n % 4 == 0) {
            n /= 4;
        }
        return n == 1;
    }
};