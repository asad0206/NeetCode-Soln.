# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseLL(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev, curr = None, head
        while curr:
            temp = curr.next
            curr.next = prev
            prev = curr
            curr = temp
        return prev

    def pairSum(self, head: Optional[ListNode]) -> int:
        # find the half point reverse and add 1st and half point
        fast, slow = head, head
        while fast and fast.next:
            slow, fast = slow.next, fast.next.next
        
        first = head
        second = self.reverseLL(slow)
        max_sum = 0

        while second:
            max_sum = max(max_sum, first.val + second.val)
            first = first.next
            second = second.next
        
        return max_sum