// https://leetcode.com/problems/sum-of-two-integers/

// Soln1 3ms 6mb
class Solution
{
public:
    int getSum(int a, int b)
    {
        vector<int> vec{a, b};
        return accumulate(vec.begin(), vec.end(), 0);
    }
};

// Soln2 0ms 5.9mb
class Solution
{
public:
    int getSum(int a, int b)
    {
        if (a == 0)
        {
            return b;
        }
        if (b == 0)
        {
            return a;
        }

        while (b)
        {
            int carry = a & b;
            a = a ^ b;
            b = (unsigned)carry << 1;
        }

        return a;
    }
};