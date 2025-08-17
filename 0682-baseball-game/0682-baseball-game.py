class Solution:
    def calPoints(self, operations: List[str]) -> int:
        size = len(operations)
        for i in range(size):
            curr = operations.pop(0)
            if curr == "+":
                prev2Sum = int(operations[-1]) + int(operations[-2])
                operations.append(prev2Sum)
            elif curr == "D":
                doublePrev = int(operations[-1])*2
                operations.append(doublePrev)
            elif curr == "C":
                operations.pop()
            else:
                operations.append(int(curr))
        return sum(operations)