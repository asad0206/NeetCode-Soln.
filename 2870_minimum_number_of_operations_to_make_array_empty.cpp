// https://leetcode.com/problems/minimum-number-of-operations-to-make-array-empty/description

// Level: Medium

class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        if (nums.size() < 2)
            return -1;

        unordered_map<int, int> mp;
        int count = 0;

        for (auto x : nums)
            mp[x]++;

        for (auto [p, q] : mp)
        {
            if (q == 1)
                return -1;
            count += q / 3;
            if (q % 3)
                count++;
        }

        return count;
    }
};