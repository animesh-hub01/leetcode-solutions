class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int gcd;
        for(int i=0; i<nums.size(); i++){
            mini = min(nums[i],mini);
            maxi = max(nums[i],maxi);

            for(int j=1; j<=min(mini,maxi); j++){
                if(mini%j==0 && maxi%j==0){
                    gcd = j;
                }
            }

        }
        return gcd;
    }
};