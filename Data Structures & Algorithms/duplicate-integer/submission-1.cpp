class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int>countMap;

        for(int num:nums){
            countMap[num]++;
            if (countMap[num]>1)
                return true;
        };

        return false;
        
    };
};


