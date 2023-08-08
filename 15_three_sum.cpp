// https://leetcode.com/problems/3sum/

#include <bits/stdc++.h>
using namespace std;

// hash map approach
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        if (nums.size() < 3)
            return {};

        sort(nums.begin(), nums.end());

        if (nums[0] > 0)
            return {};

        vector<vector<int>> ans;
        unordered_map<int, int> hash;

        for (int i = 0; i < nums.size(); i++)
        {
            hash[nums[i]] = i; // push all to hashmap to use direct find it
        }

        for (int i = 0; i < nums.size() - 2; i++)
        {
            if (nums[i] > 0)
                break;
            if (i > 0 && nums[i] == nums[i - 1])
                continue; // same numbers then skip it

            for (int j = i + 1; j < nums.size() - 1; j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue; // if same numbers skip it

                int key = -(nums[i] + nums[j]);

                if (hash.find(key) != hash.end() && hash[key] > j)
                { // check for the index is of key > j to not go for duplicates
                    ans.push_back({nums[i], nums[j], key});
                }
            }
        }

        return ans;
    }
};

// two pointer method

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        if (nums.size() < 3)
            return {};
        if (nums[0] > 0)
            return {};

        vector<vector<int>> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                break;
            }

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int low = i + 1, high = nums.size() - 1, sum = 0;

            while (low < high)
            {
                sum = nums[i] + nums[low] + nums[high];
                if (sum > 0)
                    high--;
                else if (sum < 0)
                    low++;
                else
                {
                    ans.push_back({nums[i], nums[low], nums[high]});
                    int low_seen = nums[low];
                    int high_seen = nums[high];

                    while (low < high && nums[low] == low_seen)
                        low++;
                    while (low < high && nums[high] == high_seen)
                        high--;
                }
            }
        }

        return ans;
    }
};

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> result;
        int n = nums.size();
        if (n < 3)
        {
            return result;
        }
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++)
        {
            if (nums[i] > 0)
            {
                break;
            }
            if (i > 0 && nums[i - 1] == nums[i])
            {
                continue;
            }

            int j = i + 1;
            int k = n - 1;

            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0)
                {
                    j++;
                }
                else if (sum > 0)
                {
                    k--;
                }
                else
                {
                    result.push_back({nums[i], nums[j], nums[k]});

                    while (j < k && nums[j] == nums[j + 1])
                    {
                        j++;
                    }
                    j++;
                    while (j < n && nums[k] == nums[k - 1])
                    {
                        k--;
                    }
                    k--;
                }
            }
        }
        return result;
    }
};