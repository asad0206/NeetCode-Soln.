class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        q = deque()
        res = []
        
        # Process the 1st K elements
        for i in range(k):
            while q and nums[i] >= nums[q[-1]]:
                q.pop()
            q.append(i)
        
        # Process the rest of them
        for i in range(k, len(nums)):
            res.append(nums[q[0]])
            while q and q[0] <= i-k: # Remove the elements outside of the window
                q.popleft()
            while q and nums[i] >= nums[q[-1]]: # Remove the smaller elements in range k
                q.pop()
            q.append(i)
        # Append the max of the last window
        res.append(nums[q[0]])
        return res