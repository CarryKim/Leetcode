// 35. Search Insert Position
// https://leetcode.com/problems/search-insert-position/
// Authored by CarryKim

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        while(s <= e) {
            int mid = (s + e) / 2;
            if(nums[mid] == target) return mid;
            if(nums[mid] > target) 
                e = mid-1;
            else
                s = mid+1;
        }
        return s;
    }
};
