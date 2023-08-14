// https://leetcode.com/problems/contains-duplicate-ii/description/

// unordered set soln.
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_set<int> s;

        for (int i = 0; i < nums.size(); i++)
        {
            if (i > k)
            {
                s.erase(nums[i - k - 1]);
            }
            if (s.count(nums[i]))
                return true;

            s.insert(nums[i]);
        }
        return false;
    }
};

// hash map solution
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;

        for (auto i = 0; i < nums.size(); i++)
        {
            if (m.count(nums[i]) && abs(i - m[nums[i]]) <= k)
            {
                return true;
            }

            m[nums[i]] = i;
        }
        return false;
    }
};