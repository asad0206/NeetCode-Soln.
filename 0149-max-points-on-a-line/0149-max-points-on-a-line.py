class Solution:
    def maxPoints(self, points: List[List[int]]) -> int:
        res = 1

        for i in range(len(points)):
            count = defaultdict(int)
            x1, y1 = points[i]
            for j in range(i+1, len(points)):
                x2, y2 = points[j]
                if x2 == x1:
                    slope = None
                else:
                    dy, dx = y2-y1, x2-x1
                    slope = dy/dx
                count[slope] += 1
                res = max(res, count[slope]+1) # plus itself
        return res