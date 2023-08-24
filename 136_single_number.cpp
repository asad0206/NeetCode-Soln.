// https://leetcode.com/problems/single-number/description/

// faster solution solution

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (auto x : nums)
            ans ^= x;
        return ans;
    }
};

// hash map solution!

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        // hash it!!!!
        unordered_map<int, int> m;
        for (auto x : nums)
        {
            m[x]++;
        }

        for (auto z : m)
        {
            if (z.second == 1)
                return z.first;
        }
        return -1;
    }
};