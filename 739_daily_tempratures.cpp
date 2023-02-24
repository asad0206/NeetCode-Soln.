// https://leetcode.com/problems/daily-temperatures/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int n = temperatures.size();
        stack<int> stk;
        vector<int> v(n, 0);

        for (int i = 0; i < n; i++)
        {
            while (!stk.empty() && (temperatures[stk.top()] < temperatures[i]))
            {
                v[stk.top()] = i - stk.top();
                stk.pop();
            }
            stk.push(i);
        }

        return v;
    }
};