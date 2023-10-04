// https://leetcode.com/problems/search-a-2d-matrix/

// binary search 2d->1d->2d
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        int low = 0, high = row * col - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            int tR = mid / col;
            int tC = mid % col;
            if (matrix[tR][tC] == target)
            {
                return true;
            }

            if (matrix[tR][tC] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return false;
    }
};