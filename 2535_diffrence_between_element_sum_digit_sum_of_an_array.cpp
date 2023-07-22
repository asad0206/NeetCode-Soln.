// https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/

class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int sum = 0;
        int ds = 0;

        for (auto x : nums)
        {
            sum += x;
        }

        for (auto y : nums)
        {
            while (y != 0)
            {
                int rem = y % 10;
                ds += rem;
                y = y / 10;
            }
        }

        return abs(sum - ds);
    }
};