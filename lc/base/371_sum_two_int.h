#include <cmath>

/**
 * 5(101) + 7(111) = 12(1100)
 * 
 * 异或（xor）== 不带进位的二进制加法：
 * 1 ^ 0 = 1  => 1 + 0 = 1
 * 1 ^ 1 = 0  => 1 + 1 = 0 (进位1)
 * 0 ^ 0 = 0  => 0 + 0 = 0
 * 0 ^ 1 = 1  => 0 + 1 = 1
 * 
 * 加法进位
 * 0101 & 0111 = 101 代表需要进位, 为 0101 << 1 = 1010
 * 
 * 5 + 7 = ( 5 & 7 << 1) + ( 5 ^ 7 ) = （0101 & 0111 << 1) + (0101 ^ 0111) = 01010 + 00010
 * 因为还有加号，所以需要用递归，继续计算之前的结果：
 * 01010 + 00010 = （01010 & 00010 << 1) + (01010 ^ 00010) = 00100 + 01000
 * 00100 + 01000 = （00100 & 01000 << 1) + (00100 ^ 01000) = 00000 + 01100 = 01100 = 12
 * 
 * 处理负数时，移位运算需要用无符号数左移
 */
class Solution {
public:
    int getSum(int a, int b) {
        return getSumNoR(a, b);
    }
    
    int getSumNoR(int a, int b) {
        while (b != 0) {
            auto carry = (unsigned int) (a & b) << 1;
            a = a ^ b;
            b = carry;
        }
        return a;
    }
    
    // 递归版本性能较差
    int getSumR(int a, int b) {
        if (!b) {
            return a;
        }
        return getSumR(a ^ b, (unsigned int) (a & b) << 1);
    }

    // 娱乐写法
    int getSumHah(int a, int b) {
        if (a == 0 || b == 0) {
            return a ^ b;
        }
        return (int) log(exp(a) * exp(b));
    }
};