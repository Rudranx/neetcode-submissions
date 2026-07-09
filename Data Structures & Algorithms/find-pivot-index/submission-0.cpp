class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum=0;
        for(int num:nums){
            totalsum+=num;
        }

        int lsum=0;

        for(int i=0;i<nums.size();i++){
            if(lsum==totalsum-lsum-nums[i]){
                return i;
            }
            lsum+=nums[i];
        }
        return -1;
    }
};