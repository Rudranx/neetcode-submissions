class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        vector<int>result;
        while(i<j){
            if(numbers[i]+numbers[j]==target){
                result.push_back(i+1);
                result.push_back(j+1);
                break;
            }
            else if(numbers[i]+numbers[j]<target){
                i++;
            }
            else{
                j--;
            }
        }
    return result;
    }
};
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int i = 0;
//         int j = numbers.size() - 1;

//         while (i < j) {
//             int sum = numbers[i] + numbers[j];

//             if (sum == target) {
//                 return {i + 1, j + 1};
//             }
//             else if (sum < target) {
//                 i++;
//             }
//             else {
//                 j--;
//             }
//         }

//         return {};
//     }
// };