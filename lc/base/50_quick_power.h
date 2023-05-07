class Solution {
public:
    double myPow(double x, int n) {
        return myPowNR(x, n);
    }

    /*
     * n为偶数：x^n = x^(n/2) * x^(n/2);
     * n为奇数：x^n = x * x^(n/2) * x^(n/2);
     */
    double myPowR(double x, int n) {
        if (n == 0) {
            return 1.0;
        }
        long b = n;
        if (b < 0) {
            x = 1 / x;
            b = -b;
        }
        double y = myPowR(x, b >> 1);
        return (b & 1) == 0 ? y * y : y * y * x;
    }

    double myPowNR(double x, int n) {
        if (n == 0) {
            return 1.0;
        }
        long b = n;
        if (b < 0) {
            x = 1 / x;
            b = -b;
        }
        double res = 1.0;
        while (b > 0) {
            if ((b & 1) == 1) {
                res *= x;
            }
            x *= x;
            b >>= 1;
        }
        return res;
    }
};