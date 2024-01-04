// 26. Remove Duplicates from Sorted Array
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = 1;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] != nums[i-1])
                nums[cnt++] = nums[i]; 
        }
        return cnt;
    }
};
