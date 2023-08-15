// https://leetcode.com/problems/climbing-stairs/description/

// own solution
// recusive ans from Striver, converted for loop.

class Solution
{
public:
    int climbStairs(int n)
    {
        int st2 = 1, st1 = 1;

        for (int i = 2; i <= n; i++)
        {
            int curr = st1 + st2;
            st2 = st1;
            st1 = curr;
        }

        return st1;
    }
};