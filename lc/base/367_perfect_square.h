class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 0, r = num;
        while (l <= r) {
            int mid = l + (r-l) / 2;
            long square = (long) mid * mid;
            if (square < num) {
                l = mid + 1;
            } else if (square > num) {
                r = mid - 1;
            } else {
                return true;
            }
        }
        return false;
    }
    
    bool isPerfectSquare1(int num) {
        if (num == 0) {
            return true;
        }
        double b = num, x0 = num;
        while (true) {
            double xi = 0.5 * (x0 + b / x0);
            if (x0 - xi < 1e-7) {
                break;
            }
            x0 = xi;
        }
        int x = (int) x0;
        return x * x == num;
    }
};