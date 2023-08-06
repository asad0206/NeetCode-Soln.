// https://leetcode.com/problems/two-sum/

// 06-08-2023 better solution

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++)
        {
            int dif = target - nums[i];
            if (m.find(dif) == m.end())
            {
                m[nums[i]] = i;
            }
            else
            {
                return {m[dif], i};
            }
        }

        return {};
    }
};

//
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            int tar = target - nums[i];
            if (m.find(tar) != m.end())
            {
                result.push_back(m[tar]);
                result.push_back(i);
                break;
            }
            else
            {
                m.insert({nums[i], i});
            }
        }
        return result;
    }
};