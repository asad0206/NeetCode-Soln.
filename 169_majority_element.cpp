// https://leetcode.com/problems/majority-element/

// vooting algorithm
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int element = nums[0];
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (count == 0)
                element = nums[i];
            count += element == nums[i] ? 1 : -1;
        }
        return element;
    }
};

// hash map approach
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        int half = nums.size() / 2;
        for (auto x : nums)
        {
            if (++mp[x] > half)
            {
                return x;
            }
        }
        return 0;
    }
};