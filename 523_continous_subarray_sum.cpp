// https://leetcode.com/problems/continuous-subarray-sum/

// basic hashmap
class Solution
{
public:
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        int current_sum = 0, rem = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            current_sum += nums[i];
            rem = current_sum % k;

            if (rem == 0 && i > 0)
            {
                return true;
            }

            if (mp.count(rem) && i - mp[rem] >= 2)
            {
                return true;
            }

            if (mp.count(rem) == 0)
            {
                mp[rem] = i;
            }
        }
        return false;
    }
};