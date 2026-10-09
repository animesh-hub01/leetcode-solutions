class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum=0;

        for(int numbers: nums){
            totalsum += numbers;
        }

        int leftsum=0;

        for(int i=0; i<nums.size(); i++){
            int rightsum = totalsum - leftsum -nums[i];

            if(leftsum==rightsum){return i;}

            leftsum += nums[i];
        }
        return -1;
    }
};