class Solution:
    def isValid(self, s: str) -> bool:
        bracketMap = {")": "(", "]": "[", "}": "{"}
        stack = []
        for char in s:
            if char not in bracketMap:
                stack.append(char)
                continue
            if not stack or stack[-1]!=bracketMap[char]:
                return False
            stack.pop()
        return not stack
        