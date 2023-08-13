// https://leetcode.com/problems/contains-duplicate/
#include <bits/stdc++.h>

// unordered set uses hash map

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> s(nums.begin(), nums.end());
        return nums.size() > s.size();
    }
};

// set useage uses tree

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        set<int> s(nums.begin(), nums.end());
        return nums.size() > s.size();
    }
};

//

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (auto x : nums)
        {
            auto r = equal_range(nums.begin(), nums.end(), x);
            if ((r.second - r.first) > 1)
            {
                return true;
            }
        }
        return false;
    }
};