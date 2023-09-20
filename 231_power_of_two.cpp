// https://leetcode.com/problems/power-of-two/

// using __builtin_popcount()
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n < 0)
            return false;
        return __builtin_popcount(n) == 1 ? true : false;
    }
};

// using log
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
            return false;
        return ceil(log2(n)) == floor(log2(n));
    }
};