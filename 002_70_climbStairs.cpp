//
// Created by lwj on 22-8-15.
//

// F(N) = F(N - 1) + F(N - 2)
// F(1) = 1, F(2) = 2
class Solution {
public:
    // method 1: recursion
    // 1 <= N <= 45
    int climbStairs(int n) {
        if (n <= 2) {
            return n;
        } else {
            return climbStairs(n - 1) + climbStairs(n - 2);
        }
    }
};