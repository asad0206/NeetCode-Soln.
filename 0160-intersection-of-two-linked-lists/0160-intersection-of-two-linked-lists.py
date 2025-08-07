# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def length(self, head):
        if not head:
            return 0
        return 1 + self.length(head.next)

    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        m, n = self.length(headA), self.length(headB)
        curr_a, curr_b = headA, headB

        if m>n:
            for _ in range(m-n):
                curr_a = curr_a.next
        else:
            for _ in range(n-m):
                curr_b = curr_b.next
        
        while curr_a != curr_b:
            curr_a, curr_b = curr_a.next, curr_b.next
        
        return curr_a
        
        