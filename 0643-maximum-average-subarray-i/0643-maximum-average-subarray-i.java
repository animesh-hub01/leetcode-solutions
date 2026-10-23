class Solution {
    public double findMaxAverage(int[] nums, int k) {
        double sum = 0;
        // Calculate the sum of the first k elements
        for (int i = 0; i < k; ++i) {
            sum += nums[i];
        }
        
        double maxAns = sum;
        
        // Slide the window across the rest of the array
        for (int i = k; i < nums.length; ++i) {
            sum += nums[i] - nums[i - k]; // Add new element, remove oldest element
            maxAns = Math.max(maxAns, sum);
        }
        
        return maxAns / k;
    }
}