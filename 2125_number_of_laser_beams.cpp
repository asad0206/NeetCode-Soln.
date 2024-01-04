// https://leetcode.com/problems/number-of-laser-beams-in-a-bank/description/

// Difficulty: Medium

// Space complexity: O(Laser rows)
class Solution
{
public:
    int numberOfBeams(vector<string> &bank)
    {
        if (bank.size() < 2)
            return 0;

        int lasers = 0;
        vector<int> vec;

        for (auto x : bank)
        {
            int count = 0;

            for (auto s : x)
            {
                if (s == '1')
                    count++;
            }

            if (count != 0)
                vec.push_back(count);
        }

        for (int i = 1; i < vec.size(); i++)
        {
            lasers += vec[i] * vec[i - 1];
        }

        return lasers;
    }
};

// Space complexity: O(1)
class Solution
{
public:
    int numberOfBeams(vector<string> &bank)
    {
        if (bank.size() < 2)
            return 0;

        int lasers = 0;
        int lasersPrevRow = 0;

        for (auto x : bank)
        {
            int lasersCurRow = 0;

            for (auto s : x)
            {
                if (s == '1')
                    lasersCurRow++;
            }

            lasers += lasersCurRow * lasersPrevRow;
            lasersPrevRow = lasersCurRow == 0 ? lasersPrevRow : lasersCurRow;
        }

        return lasers;
    }
};