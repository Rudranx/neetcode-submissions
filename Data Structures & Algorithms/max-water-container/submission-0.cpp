class Solution {
public:
    int maxArea(vector<int>& heights) {
        int result=0;
        int res=0;
        //result = max dist b/w indices * 2nd min 
        int i=0;
        int j=heights.size()-1;
        while(i<j){
        res = (j-i)*min(heights[i],heights[j]);
        if(heights[i]<heights[j]){
            i++;
        }
        else{
            j--;
        }
        result = max(result,res);
        
        }
        return result;
    }
};
