// https://leetcode.com/problems/subarray-sum-equals-k

// simple hash map soln
class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        int sum = 0, count = 0;
        mp[sum] = 1;
        for (auto x : nums)
        {
            sum += x;
            int diff = sum - k;
            if (mp.find(diff) != mp.end())
            {
                count += mp[diff];
            }
            mp[sum]++;
        }

        return count;
    }
};