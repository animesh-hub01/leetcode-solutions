class Solution {
    public int findNumbers(int[] nums) {
        int count = 0;
        for (int num : nums) {
            if (countDigits(num) % 2 == 0) {
                count++;
            }
        }
        return count;
    }
    
    private int countDigits(int n) {
        int digits = 0;
        while (n > 0) {
            digits++;
            n /= 10;
        }
        return digits;
    }
}
