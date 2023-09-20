// https://leetcode.com/problems/minimum-size-subarray-sum/

// sliding window
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int l = 0, total = 0;
        int res = INT_MAX;

        for (int i = 0; i < nums.size(); i++)
        {
            total += nums[i];
            while (total >= target)
            {
                res = min(i - l + 1, res);
                total -= nums[l];
                l++;
            }
        }

        res = res == INT_MAX ? 0 : res;

        return res;
    }
};