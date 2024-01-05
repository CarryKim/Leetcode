// 209. Minimum Size Subarray Sum
// https://leetcode.com/problems/minimum-size-subarray-sum/
// Authored by CarryKim

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j = 0;
        int ans = INT_MAX;
        int sum = 0;
        for(int i=0; i<nums.size(); i++) {
            sum += nums[i];
            if(sum >= target) {
                while(sum >= target) {
                    ans = min(ans, i-j+1);
                    sum -= nums[j++];
                }
            }
        }
        return ans == INT_MAX ? 0 : ans;
    }
};
