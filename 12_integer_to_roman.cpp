// https://leetcode.com/problems/integer-to-roman/description/

// using mapping
class Solution
{
public:
    string intToRoman(int num)
    {
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string romanValues[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string ans = "";
        for (int i = 0; i < 13; i++)
        {
            while (num >= values[i])
            {
                ans += romanValues[i];
                num -= values[i];
            }
        }
        return ans;
    }
};

// Bruteforce O(1) basic general solution
class Solution
{
public:
    string intToRoman(int num)
    {
        string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string thousands[] = {"", "M", "MM", "MMM"};

        string roman = "";

        roman += thousands[num / 1000];
        roman += hundreds[(num % 1000) / 100];
        roman += tens[(num % 100) / 10];
        roman += ones[num % 10];

        return roman;
    }
};