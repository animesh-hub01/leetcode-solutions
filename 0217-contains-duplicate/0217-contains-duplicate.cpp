class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int cnt=0;
        unordered_map<int, int> mpp;
        for(int i=0; i<nums.size(); i++){
            //mpp.add(nums)
            if (mpp[nums[i]]>=1){
                return true;
            }
            mpp[nums[i]]++;
        }
    return false;
    }
};