// 136. Single Number
// https://leetcode.com/problems/single-number/
// Authored by CarryKim

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> m;
        for(int i=0; i<nums.size(); i++)
            m[nums[i]]++;
        for(auto &ans : m){
            if(ans.second == 1)
                return ans.first;
        }
        return 0;
    }
};
