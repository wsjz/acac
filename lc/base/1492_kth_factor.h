class Solution {
public:
    int kthFactor(int n, int k) {
        int i = 1;
        int count = 0;
        while (i <= n / 2) {
            if (n % i == 0) {
                count++;
            }
            if (count == k) {
                return i;
            }
            i++;
        }
        if (count == k - 1) {
            return n;
        }
        return -1;
    }
};