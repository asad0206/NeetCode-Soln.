class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        # using queue logic
        countPushedBack = 0
        while countPushedBack != len(students):
            currStudent = students.pop(0)
            if currStudent == sandwiches[0]:
                sandwiches.pop(0)
                countPushedBack = 0
            else:
                students.append(currStudent)
                countPushedBack += 1
        return countPushedBack
        