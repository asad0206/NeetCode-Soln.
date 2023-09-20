// https://leetcode.com/problems/number-of-1-bits/

//__builtin_popcount()
class Solution
{
public:
	int hammingWeight(uint32_t n)
	{
		unsigned int count = __builtin_popcount(n);
		return count;
	}
};

class Solution
{
public:
	int hammingWeight(uint32_t n)
	{
		int count = 0;
		while (n)
		{
			count += n % 2;
			n = n >> 1;
		}

		return count;
	}
};
