class Solution {
    public int maxVowels(String s, int k) {
        int currentVowels = 0;
        
        // Count vowels in the first window of size k
        for (int i = 0; i < k; i++) {
            if (isVowel(s.charAt(i))) {
                currentVowels++;
            }
        }
        
        int maxVowels = currentVowels;
        
        // Slide the window across the rest of the string
        for (int i = k; i < s.length(); i++) {
            // Add the new character entering the window
            if (isVowel(s.charAt(i))) {
                currentVowels++;
            }
            // Remove the character leaving the window
            if (isVowel(s.charAt(i - k))) {
                currentVowels--;
            }
            
            // Keep track of the maximum vowels found
            maxVowels = Math.max(maxVowels, currentVowels);
            
            // Optimization: If maxVowels reaches k, we can't find a higher count
            if (maxVowels == k) {
                return k;
            }
        }
        
        return maxVowels;
    }
    
    // Helper method to check if a character is a vowel
    private boolean isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
}
