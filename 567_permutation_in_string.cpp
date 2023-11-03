// https://leetcode.com/problems/permutation-in-string/description/

// sliding window with hash map
class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        unordered_map<char, int> mp;
        for (auto it : s1)
        {
            mp[it]++;
        }
        int count = mp.size();
        int i = 0, j = 0;
        int k = s1.size();
        while (j < s2.size())
        {
            if (mp.find(s2[j]) != mp.end())
            {
                mp[s2[j]]--;
                if (mp[s2[j]] == 0)
                {
                    count--;
                }
            }
            if (j - i + 1 < k)
            {
                j++;
            }
            else if (j - i + 1 == k)
            {
                if (count == 0)
                {
                    return true;
                }
                if (mp.find(s2[i]) != mp.end())
                {
                    mp[s2[i]]++;
                    if (mp[s2[i]] == 1)
                    {
                        count++;
                    }
                }
                i++;
                j++;
            }
        }
        return false;
    }
};

// own bad code !!!!!!
class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        bool flag = false;
        int k = s1.size();
        if (k > s2.size())
            return flag;
        sort(s1.begin(), s1.end());
        for (int i = 0; i <= s2.size() - k; i++)
        {
            string sub = s2.substr(i, k);
            string temp = sub;
            sort(temp.begin(), temp.end());
            if (temp == s1)
            {
                flag = true;
                break;
            }
        }

        return flag;
    }
};