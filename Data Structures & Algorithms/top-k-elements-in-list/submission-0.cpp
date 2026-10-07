class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>result;
        unordered_map<int,int>mp;

        for(auto x : nums){
            mp[x]++;
        }

        vector<pair<int,int>>fr;
        for(auto x : mp){
            fr.push_back({x.second, x.first});
        }

        sort(fr.rbegin(),fr.rend());
        for(int i = 0; i < k; i++) {
            result.push_back(fr[i].second);
        }
        return result;
    }
};
