// https://leetcode.com/problems/consecutive-numbers-sum/description/

// 2. math
class Solution
{
public:
    int consecutiveNumbersSum(int n)
    {
        /**
        x + x+1  + x+2 + ... k terms = N
        kx + k(k-1)/2 = N
        kx = N -k(k-1)/2;

        N> k(k-1)/2
        2N > k(k-1)
        k^2 > k(k-1)
        2N>=k2

        x = N

        all k such that the following is true
        N-(k-1)(k)/2  >=0
        2N >= (k)k
        k^2 <= 2N
        [N-(k-1)(k)/2 ]%k = 0
        1,  2,3,4,5,6    N

        **/
        int cnt = 1;
        for (int k = 2; k * k < (n << 1); k++)
        {
            if ((n - (k * (k - 1)) / 2) % k == 0)
                cnt++;
        }
        return cnt;
    }
};

// 1. brute force factorize
class Solution
{
public:
    int consecutiveNumbersSum(int n)
    {
        // find the factors to check how many ways it can be added for that sum
        int count = 0;
        int i = 1;
        while (n > 0)
        {
            n = n - i;
            if (n % i == 0)
                count++;
            i++;
        }

        return count;
    }
};
