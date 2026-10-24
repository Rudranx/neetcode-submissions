class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // unordered_set<int>st(nums.begin(), nums.end());;
        // int ans=0;
        // for(int i=0;i<nums.size();i++){
        //     if(st.find(nums[i])!=st.end()){
        //         st.insert(nums[i]);
        //     }
        // }
        // int c=0;
        // for(int i=0;i<nums.size();i++){
        //     int k=0;
        //     if(st.find(nums[i]-1)==st.end()){
        //         if(st.find(nums[i+k]!=st.end)){
        //              c++;
        //             k++;
        //         }
        //         ans=max(ans,c)
        //     }
        // }
        // if(nums.size()==0) return 0;
        //     sort(nums.begin(),nums.end());
        //     int lastsmaller=INT_MIN;
        //     int cnt=0;
        //     int longest=1;
        // for(int i=0;i<nums.size();i++){
            
        //     if(nums[i]-1==lastsmaller){
        //         cnt++;
        //         lastsmaller=nums[i];
        //     }
        //     else if(nums[i]!=lastsmaller){
        //         cnt=1;
        //         lastsmaller=nums[i];
        //     }
        // longest = max(longest,cnt);
        // }
        
        // return longest;

        int n = nums.size();
        if(n==0) return 0;

        int longest =1;
        unordered_set<int> st(nums.begin(),nums.end());
        for(auto it : st){
            if(st.find(it-1)==st.end()){
                int cnt =1;
                int x = it;
                while(st.find(x+1)!=st.end()){
                    x=x+1;
                    cnt++;
                }
                longest=max(longest,cnt);
            }
        }
        return longest;
    }
};
