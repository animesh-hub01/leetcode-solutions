class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        if not strs:
            return ""
            
        # Take the first string as a reference
        for i in range(len(strs[0])):
            char = strs[0][i]
            
            # Check this character against all other strings
            for string in strs[1:]:
                # If we reach the end of a string or characters don't match
                if i == len(string) or string[i] != char:
                    return strs[0][:i]
                    
        return strs[0]
