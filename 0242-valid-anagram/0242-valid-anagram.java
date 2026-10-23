class Solution {
    public boolean isAnagram(String s, String t) {
        // If lengths are different, they cannot be anagrams
        if (s.length() != t.length()) {
            return false;
        }
        
        int[] count = new int[26];
        
        // Count characters in string s and subtract for string t in one pass
        for (int i = 0; i < s.length(); i++) {
            count[s.charAt(i) - 'a']++;
            count[t.charAt(i) - 'a']--;
        }
        
        // If all counts are zero, they are anagrams
        for (int c : count) {
            if (c != 0) {
                return false;
            }
        }
        
        return true;
    }
}
