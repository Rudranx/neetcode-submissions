class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int>result;
        map<int,int> mpp;
        for(int i=0;i<arr.size();i++){
            int temp = target -arr[i];
            if(mpp.find(temp)!=mpp.end()){
                result.push_back(mpp[temp]);
                result.push_back(i);
                return result;
            }
            mpp[arr[i]]=i;
        }
        return result;
    }
};
