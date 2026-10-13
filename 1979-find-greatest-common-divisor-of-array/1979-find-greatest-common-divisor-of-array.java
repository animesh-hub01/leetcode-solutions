class Solution {
    public int findGCD(int[] nums) {
        int mini = 1001;
        int maxi = 0;
        int gcd=0;
        for(int i=0; i<nums.length; i++){
            mini = Math.min(nums[i],mini);
            maxi = Math.max(nums[i],maxi);

            for(int j=1; j<=Math.min(mini,maxi); j++){
                if(mini%j==0 && maxi%j==0){
                    gcd = j;
                }
            }

        }
        return gcd;
    }
}