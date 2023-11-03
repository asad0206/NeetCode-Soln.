// https://leetcode.com/problems/find-the-difference/description/

// bitwise xor operator
class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        char ans = 0;

        for (const char c : s)
            ans ^= c;

        for (const char c : t)
            ans ^= c;

        return ans;
    }
};

// ascii calculation
class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int ascii = 0;
        for (int i = 0; i < s.size(); i++)
        {
            ascii -= s[i];
            ascii += t[i];
        }
        ascii += t[s.size()];
        return ascii;
    }
};

// normal sorting and finding diffrence
class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != t[i])
                return t[i];
        }

        return t.back();
    }
};