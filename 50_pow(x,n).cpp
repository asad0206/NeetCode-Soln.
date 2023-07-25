// https://leetcode.com/problems/powx-n/

class Solution
{
public:
    double myPow(double x, int n)
    {
        double ret = 1;
        if (n < 0)
        {
            n = abs(n);
            x = 1 / x;
        }
        while (n > 0)
        {
            if (n & 1)
                ret *= x;
            x = x * x;
            n >>= 1;
        }
        return ret;
    }
};