// 27. Remove Element
// https://leetcode.com/problems/remove-element/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] != val)
                nums[cnt++] = nums[i]; 
        }
        return cnt;
    }
};
