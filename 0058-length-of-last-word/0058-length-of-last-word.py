class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        # split() without arguments automatically handles any amount of consecutive spaces
        words = s.split()
        
        # If the string contains at least one word, return the length of the last one
        return len(words[-1]) if words else 0
