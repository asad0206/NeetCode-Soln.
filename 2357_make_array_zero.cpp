// https://leetcode.com/problems/make-array-zero-by-subtracting-equal-amounts/description/

// optimal 0ms

class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        set<int> s;
        for (auto x : nums)
        {
            if (x != 0)
                s.insert(x);
        }

        return s.size();
    }
};