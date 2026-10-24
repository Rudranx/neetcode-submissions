#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        int water = 0;
        // vector<int> prefixmax(n);
        // vector<int> suffixmax(n);

        // // Build prefixmax array
        // prefixmax[0] = height[0];
        // for (int i = 1; i < n; i++) {
        //     prefixmax[i] = max(prefixmax[i - 1], height[i]);
        // }

        // // Build suffixmax array
        // suffixmax[n - 1] = height[n - 1];
        // for (int i = n - 2; i >= 0; i--) {
        //     suffixmax[i] = max(suffixmax[i + 1], height[i]);
        // }

        // // Calculate trapped water
        // for (int i = 0; i < n; i++) {
        //     int lmax = prefixmax[i];
        //     int rmax = suffixmax[i];
        //     water += min(lmax, rmax) - height[i];
        // }

        int l=0;
        int r=n-1;
        int lmax=height[l];
        int rmax=height[r];
        while(l<r){
            if(lmax<rmax){
                l++;
                lmax=max(lmax,height[l]);
                water+=lmax-height[l];
            }
            else{
                r--;
                rmax=max(rmax,height[r]);
                water+=rmax-height[r];
            }
        }

        return water;
    }
};