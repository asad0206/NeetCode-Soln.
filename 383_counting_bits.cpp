// https://leetcode.com/problems/counting-bits/

// Soln 1. Brute force
class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> ans;
        int rem;

        for (int i = 0; i <= n; i++)
        {
            int count = 0;
            int nr = i;
            while (nr > 0)
            {
                rem = nr % 2;
                if (rem == 1)
                {
                    count++;
                }
                nr = nr / 2;
            }
            ans.push_back(count);
        }

        return ans;
    }
};

// Soln 2. optimal neetcode
class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> result(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            //                 i / 2      i % 2
            result[i] = result[i >> 1] + (i & 1);
        }

        return result;
    }
};