// https://leetcode.com/problems/maximum-subarray/description/

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sub_sum = nums[0];
        int sum = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            sum = max(nums[i], sum + nums[i]);
            sub_sum = max(sum, sub_sum);
        }

        return sub_sum;
    }
};