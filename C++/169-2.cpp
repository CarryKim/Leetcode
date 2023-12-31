// 169. Majority Element
// https://leetcode.com/problems/majority-element/
// Authored by CarryKim

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
};
