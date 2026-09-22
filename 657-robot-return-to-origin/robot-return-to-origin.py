class Solution(object):
    def judgeCircle(self, moves):
        """
        :type moves: str
        :rtype: bool
        """
        a = 0
        b = 0
        for char in moves:
            if char == "R":
                a += 1
            elif char == "L":
                a -= 1
            elif char == "U":
                b += 1
            elif char == "D":
                b -= 1
        if a == 0 and b == 0:
            return True
        return False