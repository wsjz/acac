#include <cmath>

class Solution {
public:
    int mySqrt(int x) {
        // 二分查找
        int res = -1;
        int l = 0, r = x;
        while (l <= r) {
            int mid = l + (r-l) / 2;
            if ((long) mid * mid <= x) {
                res = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return res;
    }

    // 指数函数和对数函数的参数和返回值均为浮点数，因此运算过程中会存在误差
    // x=2147395600 
    int mySqrtMath(int x) {
        if (x <= 0) {
            return 0;
        }
        double res = exp(0.5 * log(x));
        long overflow = res + 1;
        return (long) overflow * overflow <= x ? overflow : res;
    }

    /**
     * 使用曲线 y - b= x^2 ，y值逼近0值时，求x的值就是平方根
     * 取直线上的点（xi, xi^2 - b），做一条斜率是yi= 2xi的直线
     * 
     * yi - (xi^2 - b) = 2xi(x - xi) => yi = 2xi(x - xi) + (xi^2 - b) = 2xi*x - xi^2 - b
     * 
     * 求斜率直线与横轴的交点（x,0)中x的值： 0 = 2xi*x - (xi^2 + b) => x = 0.5*(xi+ b/xi)
     * b的初始值为x, 因为直线有两个零点，初始值小时会选到负的那个零点.
     */
    int mySqrtNewton(int x) {
        if (x == 0) {
            return 0;
        }
        double b = x, x0 = x;
        while (true) {
            double xi = 0.5 * (x0 + b / x0);
            if (fabs(x0 - xi) < 1e-7) {
                break;
            }
            x0 = xi;
        }
        return (int) x0;
    }
};