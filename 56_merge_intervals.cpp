// https://leetcode.com/problems/merge-intervals/

// striver's solution! 39ms

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        for (int i = 0; i < n; i++)
        {
            if (ans.empty() || intervals[i][0] > ans.back()[1])
            {
                ans.push_back(intervals[i]);
            }
            else
            {
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;
    }
};

// own solution 20ms

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        if (intervals.size() <= 1)
            return intervals;

        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        int j = 0;
        for (int i = 1; i < intervals.size(); i++)
        {
            if (res[j][1] >= intervals[i][0])
            {
                res[j][1] = max(res[j][1], intervals[i][1]);
            }
            else
            {
                j++;
                res.push_back(intervals[i]);
            }
        }

        return res;
    }
};