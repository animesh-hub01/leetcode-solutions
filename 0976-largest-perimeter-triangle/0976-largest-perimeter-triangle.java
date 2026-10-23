class Solution {
    public int largestPerimeter(int[] nums) {
        // Sort the array in ascending order
        Arrays.sort(nums);
        
        // Check triplets from the largest elements down to the smallest
        for (int i = nums.length - 1; i >= 2; i--) {
            // The sum of the two smaller sides must be greater than the largest side
            if (nums[i - 2] + nums[i - 1] > nums[i]) {
                return nums[i - 2] + nums[i - 1] + nums[i];
            }
        }
        
        // Return 0 if no valid triangle is found
        return 0;
    }
}
