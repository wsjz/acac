#include <algorithm>

using namespace std;

class Solution {
public:
/*
     * n为偶数：x^n = x * (b/2) + x * (b/2)
     * n为奇数：x^n = x + x * (b/2) + x * (b/2)
     */
    int multiply(int A, int B) {
        long a = max(A, B);
        long b = min(A, B);
        if (b == 0) {
            return 0;
        }
        if (b == 1) {
            return (int) a;
        }
        long res = 0;
        while(b != 0) {
            if ((b & 1) == 1) {
                res += a;
            }
            a += a;
            b >>= 1;
        }
        return (int) res;
    }

    int multiR(int A, int B) {
        long a = max(A, B);
        long b = min(A, B);
        if (b == 0) {
            return 0;
        }
        if (b == 1) {
            return (int) a;
        }
        long y = multiR(a, b >> 1);
        return (b & 1) == 1 ? a + y + y :  y + y;
    }
};