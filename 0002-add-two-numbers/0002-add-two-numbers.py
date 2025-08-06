# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        def helper(l1, l2, carry=0):
            if not l1 and not l2 and not carry:
                return None
            
            l1_val = l1.val if l1 else 0
            l2_val = l2.val if l2 else 0
            total = l1_val + l2_val + carry

            l1_next = l1.next if l1 else 0
            l2_next = l2.next if l2 else 0
            carry_next = 1 if total>=10 else 0

            return ListNode(total%10, helper(l1_next, l2_next, carry_next))
        return helper(l1,l2)