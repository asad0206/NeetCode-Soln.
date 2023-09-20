// https://leetcode.com/problems/sum-of-values-at-indices-with-k-set-bits/

// optimized __builtin+_popcount() func
class Solution
{
public:
    int sumIndicesWithKSetBits(vector<int> &nums, int k)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (__builtin_popcount(i) == k)
            {
                sum += nums[i];
            }
        }

        return sum;
    }
};

// hash map
class Solution
{
public:
    int sumIndicesWithKSetBits(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        int sum = 0, n = nums.size();

        for (int i = 0; i < n; i++)
        {
            int count = 0;
            int num = i;
            while (num)
            {
                count += num & 1;
                num >>= 1;
            }

            mp[i] = count;
        }

        for (auto x : mp)
        {
            if (x.second == k)
            {
                sum += nums[x.first];
            }
        }

        return sum;
    }
};

// basic functional solution
class Solution
{
public:
    int countBits(int n)
    {
        int count = 0;
        while (n)
        {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }

    int sumIndicesWithKSetBits(vector<int> &nums, int k)
    {
        int n = nums.size(), sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (countBits(i) == k)
            {
                sum += nums[i];
            }
        }

        return sum;
    }
};