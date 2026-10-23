class Solution {
    public int pivotIndex(int[] nums) {
        int totalSum = 0;
        for (int num : nums) {
            totalSum += num; // Calculate total sum of the array
        }
        
        int leftSum = 0;
        for (int i = 0; i < nums.length; i++) {
            // Right sum is totalSum minus leftSum minus the current element
            int rightSum = totalSum - leftSum - nums[i];
            
            if (leftSum == rightSum) {
                return i; // Leftmost pivot index found
            }
            
            leftSum += nums[i]; // Add current element to leftSum for the next iteration
        }
        
        return -1; // Return -1 if no pivot index exists
    }
}
