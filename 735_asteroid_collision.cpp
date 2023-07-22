// https://leetcode.com/problems/asteroid-collision/

class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        vector<int> ans;

        for (int x : asteroids)
        {
            while (ans.size() && ans.back() > 0 && x < 0 && ans.back() < abs(x))
            {
                ans.pop_back();
            }

            if (ans.size() && x < 0 && ans.back() == abs(x))
            {
                ans.pop_back();
                continue;
            }

            if (!ans.size() || ans.back() < 0 || (ans.back() > 0 && x > 0))
            {
                ans.push_back(x);
            }
        }

        return ans;
    }
};