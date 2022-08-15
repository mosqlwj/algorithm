//
// Created by lwj on 22-8-15.
//
// 递归实现
// F(N) = F(N-1) + F(N-2)
// F(0) = 0, F(1) = 1
class Solution {
public:
    int fib(int n) {
        // 终止条件
        if (n < 2)
            return n;
        else
            // 递归方程，自顶向下
            return fib(n - 1) + fib(n - 2);
    }
};