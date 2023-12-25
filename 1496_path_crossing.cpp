// https://leetcode.com/problems/path-crossing/

class Solution
{
public:
    bool isPathCrossing(string path)
    {
        // x - N and S , y - E and W (x,y) coords
        int x = 0, y = 0;
        map<pair<int, int>, int> visited;
        visited[{x, y}] = 1;

        for (char dir : path)
        {
            switch (dir)
            {
            case 'N':
                x++;
                break;
            case 'S':
                x--;
                break;
            case 'E':
                y++;
                break;
            case 'W':
                y--;
                break;
            }

            if (visited[{x, y}] == 1)
                return true;

            visited[{x, y}] = 1;
        }

        return false;
    }
};