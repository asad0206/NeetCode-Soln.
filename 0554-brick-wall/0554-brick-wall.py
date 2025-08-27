class Solution:
    def leastBricks(self, wall: List[List[int]]) -> int:
        cuts=defaultdict(int)
        for row in wall:
            length = 0
            for brick in row[:-1]:
                length+=brick
                cuts[length] += 1
        return len(wall) - (max(cuts.values()) if cuts else 0)