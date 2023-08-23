// https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

#include <algorithm>
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int n = s.size();
        if (n == 0)
            return 0;

        unordered_set<char> ch;
        int i = 0, j = 0;
        int maxsize = 0;

        while (j < n)
        {
            if (ch.count(s[j]) == 0)
            {
                ch.insert(s[j]);
                maxsize = max(maxsize, (int)ch.size());
                j++;
            }
            else
            {
                ch.erase(s[i]);
                i++;
            }
        }

        return maxsize;
    }
};