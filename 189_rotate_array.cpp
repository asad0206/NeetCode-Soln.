// https://leetcode.com/problems/rotate-array/description/

// optimized

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        k = k % nums.size();
        reverse(nums.begin(), nums.begin() + (nums.size() - k));
        reverse(nums.begin() + (nums.size() - k), nums.end());
        reverse(nums.begin(), nums.end());
    }
};

// time O(n) space O(n)

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        k = k % nums.size();
        int m = nums.size() - k;
        vector<int> vec;

        for (int i = m; i < nums.size(); i++)
        {
            vec.push_back(nums[i]);
        }
        for (int i = 0; i < m; i++)
        {
            vec.push_back(nums[i]);
        }

        nums = vec;
    }
};