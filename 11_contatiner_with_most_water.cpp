// https://leetcode.com/problems/container-with-most-water/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int i = 0;
        int j = height.size() - 1;
        int start = 0;
        int last = 0;

        while (i < j)
        {
            start = min(height[i], height[j]) * (j - i);
            last = max(start, last);
            if (height[i] <= height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return last;
    }
};