// 167. Two Sum II - Input Array is Sorted
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// Authored by CarryKim

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        int end = numbers.size()-1;
        vector<int> ans;
        while(start <= end) {
            int sum = numbers[start] + numbers[end];
            if(sum == target) {
                ans.push_back(start+1);
                ans.push_back(end+1);
                break;
            }
            if(sum < target)
                start++;
            else
                end--;
        }
        return ans;
    }
};
