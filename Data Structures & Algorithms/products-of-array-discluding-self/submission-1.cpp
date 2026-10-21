class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);

        // Step 1: Calculate prefix products directly in result
        for (int i = 1; i < n; ++i) {
            result[i] = result[i - 1] * nums[i - 1];
        }

        // Step 2: Multiply by suffix products using a single rolling variable
        int right = 1;
        for (int i = n - 1; i >= 0; --i) {
            result[i] *= right;
            right *= nums[i];
        }

        return result;
    }
};
