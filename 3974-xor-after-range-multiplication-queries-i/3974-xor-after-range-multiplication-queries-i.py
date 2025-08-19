class Solution:
    def xorAfterQueries(self, nums: List[int], queries: List[List[int]]) -> int:
        constant = 10**9 + 7
        for li, ri, ki, vi in queries:
            idx = li
            # dont use while because slow in python
            # for loop for unrolling
            for idx in range(li, ri+1, ki):
                nums[idx] = (nums[idx] * vi) % constant

        xorprod = 0
        for num in nums:
            xorprod ^= num
        return xorprod