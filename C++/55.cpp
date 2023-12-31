// 55. Jump Game
// https://leetcode.com/problems/jump-game/
// Authored by CarryKim

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx = 0;
        for(int i=0; i<nums.size(); i++){
            if(mx < i)
                return false;
            mx = max(mx, nums[i] + i);
        }
        return mx >= nums.size()-1;
    }
};
