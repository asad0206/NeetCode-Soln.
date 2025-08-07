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
        if m>n:
            for _ in range(m-n):
                headA = headA.next
        else:
            for _ in range(n-m):
                headB = headB.next
        
        while headA != headB:
            headA, headB = headA.next, headB.next
        
        return headA
        
        