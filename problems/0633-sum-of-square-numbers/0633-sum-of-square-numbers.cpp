class Solution {
public:
    bool judgeSquareSum(int c) {
        long long L = 0;
        long long R = std::sqrt(c);

        while (L <= R) {
            long long sum = (L * L) + (R * R);

            if (sum == c) {
                return true;
            } else if (sum > c) {
                R--;
            } else {
                L++;
            }
        }
        return false;
    }
};