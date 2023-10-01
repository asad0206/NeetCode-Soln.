// https://leetcode.com/problems/plus-one

// faster
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0 && carry; i--)
        {
            digits[i]++;
            if (digits[i] == 10)
            {
                digits[i] = 0;
            }
            else
            {
                carry = 0;
            }
        }

        if (carry)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

// slower
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] == 9)
            {
                digits[i] = 0;
            }
            else
            {
                digits[i]++;
                return digits;
            }
        }

        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};