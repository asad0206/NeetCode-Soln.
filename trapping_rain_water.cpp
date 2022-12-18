// https://leetcode.com/problems/trapping-rain-water/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int i = 0;
        int j = height.size() - 1;
        int start = height[i];
        int last = height[j];
        int vol = 0;
        while (i < j)
        {
            if (start <= last)
            {
                i++;
                start = max(start, height[i]);
                vol += start - height[i];
            }
            else
            {
                j--;
                last = max(last, height[j]);
                vol += last - height[j];
            }
        }
        return vol;
    }
};