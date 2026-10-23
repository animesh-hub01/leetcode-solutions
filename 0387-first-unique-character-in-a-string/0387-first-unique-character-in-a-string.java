class Solution {
    public int firstUniqChar(String s) {
        int[] charCount = new int[26];
        
        // Step 1: Count the frequency of each character
        for (int i = 0; i < s.length(); i++) {
            charCount[s.charAt(i) - 'a']++;
        }
        
        // Step 2: Find the first character with a frequency of 1
        for (int i = 0; i < s.length(); i++) {
            if (charCount[s.charAt(i) - 'a'] == 1) {
                return i;
            }
        }
        
        // Return -1 if no unique character exists
        return -1;
    }
}
