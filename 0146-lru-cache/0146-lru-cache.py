class Node:
    def __init__(self, key, val):
        self.key, self.val = key, val
        self.prev, self.next = None, None

class LinkedList:
    def __init__(self):
        self.head = Node(None, 'head')
        self.tail = Node(None, 'tail')
        self.head.next = self.tail
        self.tail.prev = self.head
    
    def get_head(self):
        return self.head.next
    
    def get_tail(self):
        return self.tail.prev
    
    def add(self, node):
        prev = self.tail.prev
        prev.next = node
        node.prev = prev
        node.next = self.tail
        self.tail.prev = node

    def remove(self, node):
        prev = node.prev
        nxt = node.next
        prev.next = nxt
        nxt.prev = prev

class LRUCache:

    def __init__(self, capacity: int):
        self.n = capacity
        self.dict = {}
        self.list = LinkedList()

    def get(self, key: int) -> int:
        if key in self.dict:
            n = self.dict[key]
            self.list.remove(n)
            self.list.add(n)
            return n.val
        return -1
        
    def put(self, key: int, value: int) -> None:
        if key in self.dict:
            old_node = self.dict[key]
            self.list.remove(old_node)
        
        n= Node(key,value)
        self.list.add(n)
        self.dict[key] = n

        if len(self.dict) > self.n:
            head = self.list.get_head()
            self.list.remove(head)
            del self.dict[head.key]
        
# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)