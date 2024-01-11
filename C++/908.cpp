// 908. Smallest Range I
// https://leetcode.com/problems/smallest-range-i/
// Authored by CarryKim

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mx = nums[0];
        int mn = nums[0];
        for(int i=0; i<nums.size(); i++) {
            mx = max(nums[i], mx);
            mn = min(nums[i], mn);
        }
        return max(0, mx - mn - 2*k);
    }
};
