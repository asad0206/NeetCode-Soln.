// https://leetcode.com/problems/assign-cookies/description/

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int count = 0, i = 0, j = 0;

        while (i < g.size() && j < s.size())
        {
            if (g[i] <= s[j])
            {
                count++;
                i++;
                j++;
            }
            else if (g[i] > s[j])
            {
                j++;
            }
        }
        return count;
    }
};